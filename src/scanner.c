#include "tree_sitter/parser.h"

enum TokenType {
  BODY_CONTENT,
  BODY_SEPARATOR,
};

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

void *tree_sitter_http_external_scanner_create(void) { return NULL; }
void tree_sitter_http_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_http_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  return 0;
}
void tree_sitter_http_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {}

bool tree_sitter_http_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  // BODY_SEPARATOR: a blank line that precedes actual body content.
  // Consumes the blank line, then peeks ahead to verify body follows.
  if (valid_symbols[BODY_SEPARATOR] && !valid_symbols[BODY_CONTENT]) {
    // Skip optional leading whitespace on the blank line
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      advance(lexer);
    }

    // Must be at a newline
    if (lexer->lookahead != '\n' && lexer->lookahead != '\r') {
      return false;
    }

    // Consume the newline
    if (lexer->lookahead == '\r') advance(lexer);
    if (lexer->lookahead == '\n') advance(lexer);

    // Mark end here — this is where the body_separator token ends.
    // Everything after this is peeking to decide if we emit the token.
    lexer->mark_end(lexer);

    // Peek at what follows to decide if this starts a body
    if (lexer->eof(lexer)) return false;

    // Skip blank lines when peeking (body can have internal blank lines)
    while (!lexer->eof(lexer)) {
      // Skip whitespace
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        advance(lexer);
      }
      // If newline, skip it (blank line) and continue peeking
      if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
        if (lexer->lookahead == '\r') advance(lexer);
        if (lexer->lookahead == '\n') advance(lexer);
        continue;
      }
      break;
    }

    if (lexer->eof(lexer)) return false;

    // Check what the next non-blank line starts with
    int32_t c = lexer->lookahead;

    // ### = separator, not body
    if (c == '#') {
      advance(lexer);
      if (lexer->lookahead == '#') {
        advance(lexer);
        if (lexer->lookahead == '#') {
          return false;
        }
      }
      // Single or double # is fine as body content (comments in JSON etc.)
      lexer->result_symbol = BODY_SEPARATOR;
      return true;
    }

    // @ at line start = file variable, not body
    if (c == '@') return false;

    // Check for HTTP methods (uppercase letters followed by space)
    if (c >= 'A' && c <= 'Z') {
      char buf[8];
      int i = 0;
      buf[i++] = (char)c;
      advance(lexer);
      while (i < 7 && lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') {
        buf[i++] = (char)lexer->lookahead;
        advance(lexer);
      }
      buf[i] = '\0';

      if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        const char *methods[] = {
          "GET", "POST", "PUT", "DELETE", "PATCH",
          "HEAD", "OPTIONS", "CONNECT", "TRACE", NULL
        };
        for (int j = 0; methods[j]; j++) {
          int k = 0;
          while (methods[j][k] && buf[k] && methods[j][k] == buf[k]) k++;
          if (methods[j][k] == '\0' && buf[k] == '\0') {
            return false; // Next section's request line
          }
        }
      }
    }

    // Looks like body content follows
    lexer->result_symbol = BODY_SEPARATOR;
    return true;
  }

  // BODY_CONTENT: consume a single line of body text.
  // Rejects lines starting with ### (separator) and empty lines.
  if (valid_symbols[BODY_CONTENT]) {
    if (lexer->eof(lexer)) return false;

    // Reject empty lines (just newline)
    if (lexer->lookahead == '\n' || lexer->lookahead == '\r') return false;

    // Reject file references: lines starting with < or <@
    if (lexer->lookahead == '<') return false;

    // Reject if line starts with ###
    if (lexer->lookahead == '#') {
      advance(lexer);
      if (lexer->lookahead == '#') {
        advance(lexer);
        if (lexer->lookahead == '#') {
          return false; // This is a separator
        }
        // ## but not ###, consume rest of line as body
      }
      // # but not ##, consume rest of line as body
    }

    // Consume to end of line
    while (!lexer->eof(lexer) && lexer->lookahead != '\n' &&
           lexer->lookahead != '\r') {
      advance(lexer);
    }

    lexer->result_symbol = BODY_CONTENT;
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}
