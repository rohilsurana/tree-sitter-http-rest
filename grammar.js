/// <reference types="tree-sitter-cli/dsl" />

const METHODS = [
  "GET",
  "POST",
  "PUT",
  "DELETE",
  "PATCH",
  "HEAD",
  "OPTIONS",
  "CONNECT",
  "TRACE",
];

module.exports = grammar({
  name: "http",

  extras: ($) => [/[ \t]/],

  externals: ($) => [$.body_content, $._body_separator],

  rules: {
    document: ($) =>
      repeat(
        choice(
          $.request,
          $.request_separator,
          $.file_variable,
          $.comment,
          $._blank_line,
        ),
      ),

    request_separator: ($) =>
      seq(
        "###",
        optional(seq(/[ \t]+/, field("label", $.separator_label))),
        $._newline,
      ),

    separator_label: (_) => /[^\r\n]+/,

    request: ($) =>
      prec.right(
        seq(
          repeat($.annotation),
          $.request_line,
          $._newline,
          repeat($.url_continuation),
          repeat($.header),
          optional($.body),
        ),
      ),

    annotation: ($) =>
      seq(
        choice("#", "//"),
        /[ \t]*/,
        "@",
        field("name", $.annotation_name),
        optional(seq(/[ \t]+/, field("value", $.annotation_value))),
        $._newline,
      ),

    annotation_name: (_) =>
      choice("name", "prompt", "note", "no-redirect", "no-cookie-jar"),

    annotation_value: (_) => /[^\r\n]+/,

    request_line: ($) =>
      seq(
        field("method", $.method),
        /[ \t]+/,
        field("url", $.url),
        optional(seq(/[ \t]+/, field("version", $.http_version))),
      ),

    method: (_) => choice(...METHODS),

    url: ($) => repeat1(choice($.variable, $.url_segment)),

    url_segment: (_) => /[^\s{}]+/,

    // Multiline URL: indented continuation lines starting with /, ?, &, or #
    url_continuation: ($) =>
      seq(
        /[ \t]+/,
        repeat1(choice($.variable, $.url_segment)),
        $._newline,
      ),

    http_version: (_) => /HTTP\/[0-9.]+/,

    header: ($) =>
      seq(
        field("name", $.header_name),
        ":",
        optional(seq(/[ \t]*/, field("value", $.header_value))),
        $._newline,
        repeat($.header_continuation),
      ),

    header_name: (_) => /[A-Za-z0-9\-_]+/,

    header_value: ($) => repeat1(choice($.variable, $.header_value_segment)),

    header_value_segment: (_) => /[^\r\n{}]+/,

    // Multiline header value: indented continuation lines
    header_continuation: ($) =>
      seq(
        /[ \t]+/,
        field("value", $.header_value),
        $._newline,
      ),

    body: ($) =>
      seq(
        $._body_separator,
        choice($.file_reference, $.raw_body),
      ),

    file_reference: ($) =>
      seq(
        choice("<@", "<"),
        /[ \t]*/,
        field("path", $.file_path),
        $._newline,
      ),

    file_path: (_) => /[^\r\n]+/,

    raw_body: ($) =>
      prec.right(repeat1(choice($.body_line, $._blank_line))),

    body_line: ($) =>
      seq(
        $.body_content,
        $._newline,
      ),

    variable: ($) =>
      seq(
        "{{",
        choice($.system_variable, $.variable_name),
        "}}",
      ),

    variable_name: (_) => /[A-Za-z_][A-Za-z0-9_.]*/,

    system_variable: ($) =>
      seq(
        "$",
        field("name", $.system_variable_name),
        optional(seq(/[ \t]+/, field("args", $.system_variable_args))),
      ),

    system_variable_name: (_) =>
      choice(
        "guid",
        "randomInt",
        "timestamp",
        "datetime",
        "localDatetime",
        "dotenv",
        "processEnv",
      ),

    system_variable_args: (_) => /[^}]+/,

    file_variable: ($) =>
      seq(
        "@",
        field("name", $.file_variable_name),
        /[ \t]*/,
        "=",
        /[ \t]*/,
        field("value", $.file_variable_value),
        $._newline,
      ),

    file_variable_name: (_) => /[A-Za-z_][A-Za-z0-9_]*/,

    file_variable_value: ($) =>
      repeat1(choice($.variable, $.file_variable_raw)),

    file_variable_raw: (_) => /[^\r\n{}]+/,

    comment: ($) =>
      seq(
        choice("#", "//"),
        optional(seq(/[ \t]*/, $.comment_text)),
        $._newline,
      ),

    comment_text: (_) => /[^\r\n@][^\r\n]*/,

    _blank_line: (_) => /[ \t]*\r?\n/,

    _newline: (_) => /\r?\n/,
  },
});
