#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_POUND_POUND_POUND = 1,
  aux_sym_request_separator_token1 = 2,
  aux_sym_separator_label_token1 = 3,
  anon_sym_POUND = 4,
  anon_sym_SLASH_SLASH = 5,
  aux_sym_annotation_token1 = 6,
  anon_sym_AT = 7,
  anon_sym_name = 8,
  anon_sym_prompt = 9,
  anon_sym_note = 10,
  anon_sym_no_DASHredirect = 11,
  anon_sym_no_DASHcookie_DASHjar = 12,
  anon_sym_GET = 13,
  anon_sym_POST = 14,
  anon_sym_PUT = 15,
  anon_sym_DELETE = 16,
  anon_sym_PATCH = 17,
  anon_sym_HEAD = 18,
  anon_sym_OPTIONS = 19,
  anon_sym_CONNECT = 20,
  anon_sym_TRACE = 21,
  sym_url_segment = 22,
  sym_http_version = 23,
  anon_sym_COLON = 24,
  sym_header_name = 25,
  aux_sym_header_value_segment_token1 = 26,
  anon_sym_LT_AT = 27,
  anon_sym_LT = 28,
  anon_sym_LBRACE_LBRACE = 29,
  anon_sym_RBRACE_RBRACE = 30,
  sym_variable_name = 31,
  anon_sym_DOLLAR = 32,
  anon_sym_guid = 33,
  anon_sym_randomInt = 34,
  anon_sym_timestamp = 35,
  anon_sym_datetime = 36,
  anon_sym_localDatetime = 37,
  anon_sym_dotenv = 38,
  anon_sym_processEnv = 39,
  sym_system_variable_args = 40,
  anon_sym_EQ = 41,
  sym_file_variable_name = 42,
  sym_comment_text = 43,
  sym__blank_line = 44,
  sym__newline = 45,
  sym_body_content = 46,
  sym__body_separator = 47,
  sym_document = 48,
  sym_request_separator = 49,
  sym_separator_label = 50,
  sym_request = 51,
  sym_annotation = 52,
  sym_annotation_name = 53,
  sym_annotation_value = 54,
  sym_request_line = 55,
  sym_method = 56,
  sym_url = 57,
  sym_header = 58,
  sym_header_value = 59,
  sym_header_value_segment = 60,
  sym_body = 61,
  sym_file_reference = 62,
  sym_file_path = 63,
  sym_raw_body = 64,
  sym_body_line = 65,
  sym_variable = 66,
  sym_system_variable = 67,
  sym_system_variable_name = 68,
  sym_file_variable = 69,
  sym_file_variable_value = 70,
  sym_file_variable_raw = 71,
  sym_comment = 72,
  aux_sym_document_repeat1 = 73,
  aux_sym_request_repeat1 = 74,
  aux_sym_request_repeat2 = 75,
  aux_sym_url_repeat1 = 76,
  aux_sym_header_value_repeat1 = 77,
  aux_sym_raw_body_repeat1 = 78,
  aux_sym_file_variable_value_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_POUND_POUND] = "###",
  [aux_sym_request_separator_token1] = "request_separator_token1",
  [aux_sym_separator_label_token1] = "separator_label_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_annotation_token1] = "annotation_token1",
  [anon_sym_AT] = "@",
  [anon_sym_name] = "name",
  [anon_sym_prompt] = "prompt",
  [anon_sym_note] = "note",
  [anon_sym_no_DASHredirect] = "no-redirect",
  [anon_sym_no_DASHcookie_DASHjar] = "no-cookie-jar",
  [anon_sym_GET] = "GET",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_TRACE] = "TRACE",
  [sym_url_segment] = "url_segment",
  [sym_http_version] = "http_version",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [aux_sym_header_value_segment_token1] = "header_value_segment_token1",
  [anon_sym_LT_AT] = "<@",
  [anon_sym_LT] = "<",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_variable_name] = "variable_name",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_guid] = "guid",
  [anon_sym_randomInt] = "randomInt",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_datetime] = "datetime",
  [anon_sym_localDatetime] = "localDatetime",
  [anon_sym_dotenv] = "dotenv",
  [anon_sym_processEnv] = "processEnv",
  [sym_system_variable_args] = "system_variable_args",
  [anon_sym_EQ] = "=",
  [sym_file_variable_name] = "file_variable_name",
  [sym_comment_text] = "comment_text",
  [sym__blank_line] = "_blank_line",
  [sym__newline] = "_newline",
  [sym_body_content] = "body_content",
  [sym__body_separator] = "_body_separator",
  [sym_document] = "document",
  [sym_request_separator] = "request_separator",
  [sym_separator_label] = "separator_label",
  [sym_request] = "request",
  [sym_annotation] = "annotation",
  [sym_annotation_name] = "annotation_name",
  [sym_annotation_value] = "annotation_value",
  [sym_request_line] = "request_line",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym_header_value] = "header_value",
  [sym_header_value_segment] = "header_value_segment",
  [sym_body] = "body",
  [sym_file_reference] = "file_reference",
  [sym_file_path] = "file_path",
  [sym_raw_body] = "raw_body",
  [sym_body_line] = "body_line",
  [sym_variable] = "variable",
  [sym_system_variable] = "system_variable",
  [sym_system_variable_name] = "system_variable_name",
  [sym_file_variable] = "file_variable",
  [sym_file_variable_value] = "file_variable_value",
  [sym_file_variable_raw] = "file_variable_raw",
  [sym_comment] = "comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym_header_value_repeat1] = "header_value_repeat1",
  [aux_sym_raw_body_repeat1] = "raw_body_repeat1",
  [aux_sym_file_variable_value_repeat1] = "file_variable_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [aux_sym_request_separator_token1] = aux_sym_request_separator_token1,
  [aux_sym_separator_label_token1] = aux_sym_separator_label_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_annotation_token1] = aux_sym_annotation_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_prompt] = anon_sym_prompt,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_no_DASHredirect] = anon_sym_no_DASHredirect,
  [anon_sym_no_DASHcookie_DASHjar] = anon_sym_no_DASHcookie_DASHjar,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [sym_url_segment] = sym_url_segment,
  [sym_http_version] = sym_http_version,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [aux_sym_header_value_segment_token1] = aux_sym_header_value_segment_token1,
  [anon_sym_LT_AT] = anon_sym_LT_AT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_guid] = anon_sym_guid,
  [anon_sym_randomInt] = anon_sym_randomInt,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_localDatetime] = anon_sym_localDatetime,
  [anon_sym_dotenv] = anon_sym_dotenv,
  [anon_sym_processEnv] = anon_sym_processEnv,
  [sym_system_variable_args] = sym_system_variable_args,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_file_variable_name] = sym_file_variable_name,
  [sym_comment_text] = sym_comment_text,
  [sym__blank_line] = sym__blank_line,
  [sym__newline] = sym__newline,
  [sym_body_content] = sym_body_content,
  [sym__body_separator] = sym__body_separator,
  [sym_document] = sym_document,
  [sym_request_separator] = sym_request_separator,
  [sym_separator_label] = sym_separator_label,
  [sym_request] = sym_request,
  [sym_annotation] = sym_annotation,
  [sym_annotation_name] = sym_annotation_name,
  [sym_annotation_value] = sym_annotation_value,
  [sym_request_line] = sym_request_line,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym_header_value] = sym_header_value,
  [sym_header_value_segment] = sym_header_value_segment,
  [sym_body] = sym_body,
  [sym_file_reference] = sym_file_reference,
  [sym_file_path] = sym_file_path,
  [sym_raw_body] = sym_raw_body,
  [sym_body_line] = sym_body_line,
  [sym_variable] = sym_variable,
  [sym_system_variable] = sym_system_variable,
  [sym_system_variable_name] = sym_system_variable_name,
  [sym_file_variable] = sym_file_variable,
  [sym_file_variable_value] = sym_file_variable_value,
  [sym_file_variable_raw] = sym_file_variable_raw,
  [sym_comment] = sym_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym_header_value_repeat1] = aux_sym_header_value_repeat1,
  [aux_sym_raw_body_repeat1] = aux_sym_raw_body_repeat1,
  [aux_sym_file_variable_value_repeat1] = aux_sym_file_variable_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_request_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_separator_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_annotation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHredirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcookie_DASHjar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_url_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_value_segment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_randomInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localDatetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_processEnv] = {
    .visible = true,
    .named = false,
  },
  [sym_system_variable_args] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_file_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_body_content] = {
    .visible = true,
    .named = true,
  },
  [sym__body_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_separator_label] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_name] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_value] = {
    .visible = true,
    .named = true,
  },
  [sym_request_line] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_file_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [sym_body_line] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_system_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_system_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_file_variable_value] = {
    .visible = true,
    .named = true,
  },
  [sym_file_variable_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_variable_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_label = 2,
  field_method = 3,
  field_name = 4,
  field_path = 5,
  field_url = 6,
  field_value = 7,
  field_version = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_label] = "label",
  [field_method] = "method",
  [field_name] = "name",
  [field_path] = "path",
  [field_url] = "url",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_method, 0},
    {field_url, 2},
  [2] =
    {field_label, 2},
  [3] =
    {field_name, 3},
  [4] =
    {field_name, 0},
  [5] =
    {field_name, 1},
  [6] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [9] =
    {field_name, 3},
    {field_value, 5},
  [11] =
    {field_name, 1},
    {field_value, 5},
  [13] =
    {field_path, 2},
  [14] =
    {field_name, 0},
    {field_value, 3},
  [16] =
    {field_args, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 59,
  [86] = 86,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      ADVANCE_MAP(
        '\n', 314,
        '\r', 1,
        '#', 104,
        '$', 293,
        '/', 12,
        ':', 139,
        '<', 289,
        '=', 310,
        '@', 107,
        'C', 164,
        'D', 149,
        'G', 150,
        'H', 151,
        'O', 167,
        'P', 143,
        'T', 168,
        'd', 179,
        'g', 230,
        'l', 213,
        'n', 180,
        'p', 218,
        'r', 181,
        't', 199,
        '{', 92,
        '}', 93,
        '\t', 2,
        ' ', 2,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(314);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 314,
        '\r', 1,
        '#', 104,
        '$', 293,
        '/', 12,
        ':', 139,
        '<', 289,
        '=', 310,
        '@', 107,
        'C', 164,
        'D', 149,
        'G', 150,
        'H', 151,
        'O', 167,
        'P', 143,
        'T', 168,
        'd', 179,
        'g', 230,
        'l', 213,
        'n', 180,
        'p', 218,
        'r', 181,
        't', 199,
        '{', 92,
        '}', 93,
        '\t', 2,
        ' ', 2,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 314,
        '\r', 1,
        '#', 104,
        '/', 12,
        '<', 289,
        '@', 107,
        'C', 256,
        'D', 243,
        'G', 244,
        'H', 245,
        'O', 258,
        'P', 238,
        'T', 259,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(315);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 315,
        '\r', 4,
        'H', 20,
        'd', 21,
        'g', 88,
        'l', 66,
        'n', 22,
        'p', 74,
        'r', 23,
        't', 50,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'j') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 90:
      if (lookahead == 'v') ADVANCE(306);
      END_STATE();
    case 91:
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 92:
      if (lookahead == '{') ADVANCE(290);
      END_STATE();
    case 93:
      if (lookahead == '}') ADVANCE(291);
      END_STATE();
    case 94:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(309);
      END_STATE();
    case 96:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 97:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      ADVANCE_MAP(
        '\n', 314,
        '\r', 1,
        '#', 104,
        '/', 12,
        '<', 289,
        '@', 107,
        'C', 256,
        'D', 243,
        'G', 244,
        'H', 245,
        'O', 258,
        'P', 238,
        'T', 259,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_separator_label_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_separator_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(8);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_no_DASHredirect);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_no_DASHredirect);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_no_DASHcookie_DASHjar);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_no_DASHcookie_DASHjar);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_url_segment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'D') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'D') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'H') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'N') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'N') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'N') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'O') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'O') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'P') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'T') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 's') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(264);
      if (lookahead == 'O') ADVANCE(261);
      if (lookahead == 'U') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'j') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'k') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_header_value_segment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_header_value_segment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '@') ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_guid);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_guid);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_randomInt);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_randomInt);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_localDatetime);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_localDatetime);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_dotenv);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_dotenv);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_processEnv);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_processEnv);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_system_variable_args);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_system_variable_args);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_file_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 98},
  [3] = {.lex_state = 98},
  [4] = {.lex_state = 98, .external_lex_state = 2},
  [5] = {.lex_state = 98, .external_lex_state = 2},
  [6] = {.lex_state = 98, .external_lex_state = 2},
  [7] = {.lex_state = 98, .external_lex_state = 2},
  [8] = {.lex_state = 98, .external_lex_state = 2},
  [9] = {.lex_state = 98, .external_lex_state = 3},
  [10] = {.lex_state = 98, .external_lex_state = 3},
  [11] = {.lex_state = 98, .external_lex_state = 2},
  [12] = {.lex_state = 98, .external_lex_state = 2},
  [13] = {.lex_state = 98, .external_lex_state = 3},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 98},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 98},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 98},
  [28] = {.lex_state = 98, .external_lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 91},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 94},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 94},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 106},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 106},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 106},
  [76] = {.lex_state = 95},
  [77] = {.lex_state = 96},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 106},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_no_DASHredirect] = ACTIONS(1),
    [anon_sym_no_DASHcookie_DASHjar] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [sym_http_version] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [anon_sym_LT_AT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_guid] = ACTIONS(1),
    [anon_sym_randomInt] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_localDatetime] = ACTIONS(1),
    [anon_sym_dotenv] = ACTIONS(1),
    [anon_sym_processEnv] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_file_variable_name] = ACTIONS(1),
    [sym__blank_line] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_body_content] = ACTIONS(1),
    [sym__body_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(68),
    [sym_request_separator] = STATE(2),
    [sym_request] = STATE(2),
    [sym_annotation] = STATE(15),
    [sym_request_line] = STATE(86),
    [sym_method] = STATE(62),
    [sym_file_variable] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_request_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [anon_sym_HEAD] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [sym__blank_line] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__blank_line,
    STATE(62), 1,
      sym_method,
    STATE(86), 1,
      sym_request_line,
    STATE(15), 2,
      sym_annotation,
      aux_sym_request_repeat1,
    STATE(3), 5,
      sym_request_separator,
      sym_request,
      sym_file_variable,
      sym_comment,
      aux_sym_document_repeat1,
    ACTIONS(13), 9,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [47] = 11,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(26), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(38), 1,
      sym__blank_line,
    STATE(62), 1,
      sym_method,
    STATE(86), 1,
      sym_request_line,
    STATE(15), 2,
      sym_annotation,
      aux_sym_request_repeat1,
    STATE(3), 5,
      sym_request_separator,
      sym_request,
      sym_file_variable,
      sym_comment,
      aux_sym_document_repeat1,
    ACTIONS(35), 9,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [94] = 6,
    ACTIONS(45), 1,
      sym_header_name,
    ACTIONS(47), 1,
      sym__body_separator,
    STATE(16), 1,
      sym_body,
    STATE(6), 2,
      sym_header,
      aux_sym_request_repeat2,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(43), 10,
      anon_sym_POUND,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [127] = 6,
    ACTIONS(45), 1,
      sym_header_name,
    ACTIONS(47), 1,
      sym__body_separator,
    STATE(21), 1,
      sym_body,
    STATE(7), 2,
      sym_header,
      aux_sym_request_repeat2,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(51), 10,
      anon_sym_POUND,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [160] = 6,
    ACTIONS(45), 1,
      sym_header_name,
    ACTIONS(47), 1,
      sym__body_separator,
    STATE(21), 1,
      sym_body,
    STATE(8), 2,
      sym_header,
      aux_sym_request_repeat2,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(51), 10,
      anon_sym_POUND,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [193] = 6,
    ACTIONS(45), 1,
      sym_header_name,
    ACTIONS(47), 1,
      sym__body_separator,
    STATE(22), 1,
      sym_body,
    STATE(8), 2,
      sym_header,
      aux_sym_request_repeat2,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(55), 10,
      anon_sym_POUND,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [226] = 4,
    ACTIONS(61), 1,
      sym_header_name,
    STATE(8), 2,
      sym_header,
      aux_sym_request_repeat2,
    ACTIONS(57), 6,
      sym__body_separator,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(59), 10,
      anon_sym_POUND,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [254] = 5,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(68), 1,
      sym__blank_line,
    ACTIONS(71), 1,
      sym_body_content,
    STATE(9), 2,
      sym_body_line,
      aux_sym_raw_body_repeat1,
    ACTIONS(64), 13,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [283] = 5,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      sym__blank_line,
    ACTIONS(80), 1,
      sym_body_content,
    STATE(9), 2,
      sym_body_line,
      aux_sym_raw_body_repeat1,
    ACTIONS(74), 13,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [312] = 2,
    ACTIONS(82), 6,
      sym__body_separator,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(84), 11,
      anon_sym_POUND,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym_header_name,
  [334] = 2,
    ACTIONS(86), 6,
      sym__body_separator,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(88), 11,
      anon_sym_POUND,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym_header_name,
  [356] = 2,
    ACTIONS(92), 1,
      anon_sym_POUND,
    ACTIONS(90), 15,
      sym_body_content,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [377] = 2,
    ACTIONS(96), 1,
      anon_sym_POUND,
    ACTIONS(94), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [397] = 5,
    STATE(62), 1,
      sym_method,
    STATE(81), 1,
      sym_request_line,
    ACTIONS(98), 2,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH,
    STATE(25), 2,
      sym_annotation,
      aux_sym_request_repeat1,
    ACTIONS(13), 9,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [423] = 2,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(49), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [443] = 2,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(100), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [463] = 2,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(104), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [483] = 2,
    ACTIONS(110), 1,
      anon_sym_POUND,
    ACTIONS(108), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [503] = 2,
    ACTIONS(114), 1,
      anon_sym_POUND,
    ACTIONS(112), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [523] = 2,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(53), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [543] = 2,
    ACTIONS(118), 1,
      anon_sym_POUND,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [563] = 2,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(120), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [583] = 2,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(124), 14,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
      sym__blank_line,
  [603] = 3,
    ACTIONS(128), 2,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH,
    STATE(25), 2,
      sym_annotation,
      aux_sym_request_repeat1,
    ACTIONS(131), 9,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [623] = 1,
    ACTIONS(133), 11,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [637] = 1,
    ACTIONS(135), 11,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [651] = 6,
    ACTIONS(80), 1,
      sym_body_content,
    ACTIONS(137), 1,
      anon_sym_LT_AT,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(141), 1,
      sym__blank_line,
    STATE(10), 2,
      sym_body_line,
      aux_sym_raw_body_repeat1,
    STATE(20), 2,
      sym_file_reference,
      sym_raw_body,
  [672] = 2,
    STATE(54), 1,
      sym_system_variable_name,
    ACTIONS(143), 7,
      anon_sym_guid,
      anon_sym_randomInt,
      anon_sym_timestamp,
      anon_sym_datetime,
      anon_sym_localDatetime,
      anon_sym_dotenv,
      anon_sym_processEnv,
  [685] = 4,
    ACTIONS(145), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(149), 1,
      sym__newline,
    STATE(38), 3,
      sym_variable,
      sym_file_variable_raw,
      aux_sym_file_variable_value_repeat1,
  [700] = 4,
    ACTIONS(151), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(154), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(157), 1,
      sym__newline,
    STATE(31), 3,
      sym_header_value_segment,
      sym_variable,
      aux_sym_header_value_repeat1,
  [715] = 5,
    ACTIONS(159), 1,
      aux_sym_request_separator_token1,
    ACTIONS(161), 1,
      sym_url_segment,
    ACTIONS(163), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(165), 1,
      sym__newline,
    STATE(34), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [732] = 4,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(167), 1,
      aux_sym_header_value_segment_token1,
    STATE(74), 1,
      sym_header_value,
    STATE(37), 3,
      sym_header_value_segment,
      sym_variable,
      aux_sym_header_value_repeat1,
  [747] = 5,
    ACTIONS(169), 1,
      aux_sym_request_separator_token1,
    ACTIONS(171), 1,
      sym_url_segment,
    ACTIONS(174), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(177), 1,
      sym__newline,
    STATE(34), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [764] = 4,
    ACTIONS(145), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(69), 1,
      sym_file_variable_value,
    STATE(30), 3,
      sym_variable,
      sym_file_variable_raw,
      aux_sym_file_variable_value_repeat1,
  [779] = 2,
    STATE(52), 1,
      sym_annotation_name,
    ACTIONS(179), 5,
      anon_sym_name,
      anon_sym_prompt,
      anon_sym_note,
      anon_sym_no_DASHredirect,
      anon_sym_no_DASHcookie_DASHjar,
  [790] = 4,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(167), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(181), 1,
      sym__newline,
    STATE(31), 3,
      sym_header_value_segment,
      sym_variable,
      aux_sym_header_value_repeat1,
  [805] = 4,
    ACTIONS(183), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(186), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(189), 1,
      sym__newline,
    STATE(38), 3,
      sym_variable,
      sym_file_variable_raw,
      aux_sym_file_variable_value_repeat1,
  [820] = 4,
    ACTIONS(191), 1,
      sym_url_segment,
    ACTIONS(193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(53), 1,
      sym_url,
    STATE(32), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [834] = 2,
    ACTIONS(195), 1,
      aux_sym_request_separator_token1,
    ACTIONS(197), 3,
      sym_url_segment,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [843] = 3,
    ACTIONS(199), 1,
      sym_variable_name,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_system_variable,
  [853] = 3,
    ACTIONS(201), 1,
      anon_sym_DOLLAR,
    ACTIONS(203), 1,
      sym_variable_name,
    STATE(85), 1,
      sym_system_variable,
  [863] = 2,
    ACTIONS(205), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(207), 2,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [871] = 2,
    ACTIONS(209), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(211), 2,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [879] = 2,
    ACTIONS(195), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(197), 2,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [887] = 2,
    ACTIONS(213), 1,
      aux_sym_request_separator_token1,
    ACTIONS(215), 1,
      anon_sym_RBRACE_RBRACE,
  [894] = 2,
    ACTIONS(217), 1,
      aux_sym_separator_label_token1,
    STATE(80), 1,
      sym_separator_label,
  [901] = 2,
    ACTIONS(219), 1,
      aux_sym_separator_label_token1,
    STATE(58), 1,
      sym_annotation_value,
  [908] = 2,
    ACTIONS(221), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      sym_comment_text,
  [915] = 2,
    ACTIONS(225), 1,
      aux_sym_separator_label_token1,
    STATE(72), 1,
      sym_file_path,
  [922] = 2,
    ACTIONS(227), 1,
      aux_sym_request_separator_token1,
    ACTIONS(229), 1,
      sym__newline,
  [929] = 2,
    ACTIONS(231), 1,
      aux_sym_request_separator_token1,
    ACTIONS(233), 1,
      sym__newline,
  [936] = 2,
    ACTIONS(235), 1,
      aux_sym_request_separator_token1,
    ACTIONS(237), 1,
      sym__newline,
  [943] = 2,
    ACTIONS(239), 1,
      aux_sym_request_separator_token1,
    ACTIONS(241), 1,
      anon_sym_RBRACE_RBRACE,
  [950] = 2,
    ACTIONS(243), 1,
      aux_sym_annotation_token1,
    ACTIONS(245), 1,
      sym__newline,
  [957] = 2,
    ACTIONS(247), 1,
      aux_sym_request_separator_token1,
    ACTIONS(249), 1,
      sym__newline,
  [964] = 2,
    ACTIONS(251), 1,
      aux_sym_annotation_token1,
    ACTIONS(253), 1,
      sym__newline,
  [971] = 1,
    ACTIONS(255), 1,
      sym__newline,
  [975] = 1,
    ACTIONS(257), 1,
      anon_sym_RBRACE_RBRACE,
  [979] = 1,
    ACTIONS(259), 1,
      aux_sym_annotation_token1,
  [983] = 1,
    ACTIONS(261), 1,
      aux_sym_request_separator_token1,
  [987] = 1,
    ACTIONS(263), 1,
      aux_sym_request_separator_token1,
  [991] = 1,
    ACTIONS(265), 1,
      sym_http_version,
  [995] = 1,
    ACTIONS(267), 1,
      sym__newline,
  [999] = 1,
    ACTIONS(269), 1,
      sym__newline,
  [1003] = 1,
    ACTIONS(271), 1,
      sym__newline,
  [1007] = 1,
    ACTIONS(273), 1,
      aux_sym_annotation_token1,
  [1011] = 1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
  [1015] = 1,
    ACTIONS(277), 1,
      sym__newline,
  [1019] = 1,
    ACTIONS(279), 1,
      anon_sym_EQ,
  [1023] = 1,
    ACTIONS(281), 1,
      sym__newline,
  [1027] = 1,
    ACTIONS(283), 1,
      sym__newline,
  [1031] = 1,
    ACTIONS(285), 1,
      sym__newline,
  [1035] = 1,
    ACTIONS(287), 1,
      sym__newline,
  [1039] = 1,
    ACTIONS(289), 1,
      aux_sym_annotation_token1,
  [1043] = 1,
    ACTIONS(291), 1,
      sym_system_variable_args,
  [1047] = 1,
    ACTIONS(293), 1,
      sym_file_variable_name,
  [1051] = 1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1055] = 1,
    ACTIONS(297), 1,
      sym__newline,
  [1059] = 1,
    ACTIONS(299), 1,
      sym__newline,
  [1063] = 1,
    ACTIONS(301), 1,
      sym__newline,
  [1067] = 1,
    ACTIONS(303), 1,
      aux_sym_annotation_token1,
  [1071] = 1,
    ACTIONS(305), 1,
      anon_sym_RBRACE_RBRACE,
  [1075] = 1,
    ACTIONS(307), 1,
      anon_sym_AT,
  [1079] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACE_RBRACE,
  [1083] = 1,
    ACTIONS(311), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 334,
  [SMALL_STATE(13)] = 356,
  [SMALL_STATE(14)] = 377,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 423,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 463,
  [SMALL_STATE(19)] = 483,
  [SMALL_STATE(20)] = 503,
  [SMALL_STATE(21)] = 523,
  [SMALL_STATE(22)] = 543,
  [SMALL_STATE(23)] = 563,
  [SMALL_STATE(24)] = 583,
  [SMALL_STATE(25)] = 603,
  [SMALL_STATE(26)] = 623,
  [SMALL_STATE(27)] = 637,
  [SMALL_STATE(28)] = 651,
  [SMALL_STATE(29)] = 672,
  [SMALL_STATE(30)] = 685,
  [SMALL_STATE(31)] = 700,
  [SMALL_STATE(32)] = 715,
  [SMALL_STATE(33)] = 732,
  [SMALL_STATE(34)] = 747,
  [SMALL_STATE(35)] = 764,
  [SMALL_STATE(36)] = 779,
  [SMALL_STATE(37)] = 790,
  [SMALL_STATE(38)] = 805,
  [SMALL_STATE(39)] = 820,
  [SMALL_STATE(40)] = 834,
  [SMALL_STATE(41)] = 843,
  [SMALL_STATE(42)] = 853,
  [SMALL_STATE(43)] = 863,
  [SMALL_STATE(44)] = 871,
  [SMALL_STATE(45)] = 879,
  [SMALL_STATE(46)] = 887,
  [SMALL_STATE(47)] = 894,
  [SMALL_STATE(48)] = 901,
  [SMALL_STATE(49)] = 908,
  [SMALL_STATE(50)] = 915,
  [SMALL_STATE(51)] = 922,
  [SMALL_STATE(52)] = 929,
  [SMALL_STATE(53)] = 936,
  [SMALL_STATE(54)] = 943,
  [SMALL_STATE(55)] = 950,
  [SMALL_STATE(56)] = 957,
  [SMALL_STATE(57)] = 964,
  [SMALL_STATE(58)] = 971,
  [SMALL_STATE(59)] = 975,
  [SMALL_STATE(60)] = 979,
  [SMALL_STATE(61)] = 983,
  [SMALL_STATE(62)] = 987,
  [SMALL_STATE(63)] = 991,
  [SMALL_STATE(64)] = 995,
  [SMALL_STATE(65)] = 999,
  [SMALL_STATE(66)] = 1003,
  [SMALL_STATE(67)] = 1007,
  [SMALL_STATE(68)] = 1011,
  [SMALL_STATE(69)] = 1015,
  [SMALL_STATE(70)] = 1019,
  [SMALL_STATE(71)] = 1023,
  [SMALL_STATE(72)] = 1027,
  [SMALL_STATE(73)] = 1031,
  [SMALL_STATE(74)] = 1035,
  [SMALL_STATE(75)] = 1039,
  [SMALL_STATE(76)] = 1043,
  [SMALL_STATE(77)] = 1047,
  [SMALL_STATE(78)] = 1051,
  [SMALL_STATE(79)] = 1055,
  [SMALL_STATE(80)] = 1059,
  [SMALL_STATE(81)] = 1063,
  [SMALL_STATE(82)] = 1067,
  [SMALL_STATE(83)] = 1071,
  [SMALL_STATE(84)] = 1075,
  [SMALL_STATE(85)] = 1079,
  [SMALL_STATE(86)] = 1083,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 10),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 10),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_variable, 7, 0, 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_variable, 7, 0, 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_reference, 4, 0, 9),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_reference, 4, 0, 9),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, 0, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 7, 0, 7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_variable_value, 1, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_variable_value_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_variable_value_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_variable_value_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_variable_raw, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_variable_raw, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value_segment, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value_segment, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable_name, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable_name, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 3, 0, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 2, 0, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_line, 5, 0, 6),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [275] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator_label, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 4, 0, 11),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_body_content = 0,
  ts_external_token__body_separator = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_body_content] = sym_body_content,
  [ts_external_token__body_separator] = sym__body_separator,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_body_content] = true,
    [ts_external_token__body_separator] = true,
  },
  [2] = {
    [ts_external_token__body_separator] = true,
  },
  [3] = {
    [ts_external_token_body_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_http_external_scanner_create(void);
void tree_sitter_http_external_scanner_destroy(void *);
bool tree_sitter_http_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_http_external_scanner_serialize(void *, char *);
void tree_sitter_http_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_http(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_http_external_scanner_create,
      tree_sitter_http_external_scanner_destroy,
      tree_sitter_http_external_scanner_scan,
      tree_sitter_http_external_scanner_serialize,
      tree_sitter_http_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
