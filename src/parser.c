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
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

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
  sym_url_continuation = 58,
  sym_header = 59,
  sym_header_value = 60,
  sym_header_value_segment = 61,
  sym_header_continuation = 62,
  sym_body = 63,
  sym_file_reference = 64,
  sym_file_path = 65,
  sym_raw_body = 66,
  sym_body_line = 67,
  sym_variable = 68,
  sym_system_variable = 69,
  sym_system_variable_name = 70,
  sym_file_variable = 71,
  sym_file_variable_value = 72,
  sym_file_variable_raw = 73,
  sym_comment = 74,
  aux_sym_document_repeat1 = 75,
  aux_sym_request_repeat1 = 76,
  aux_sym_request_repeat2 = 77,
  aux_sym_request_repeat3 = 78,
  aux_sym_url_repeat1 = 79,
  aux_sym_header_repeat1 = 80,
  aux_sym_header_value_repeat1 = 81,
  aux_sym_raw_body_repeat1 = 82,
  aux_sym_file_variable_value_repeat1 = 83,
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
  [sym_url_continuation] = "url_continuation",
  [sym_header] = "header",
  [sym_header_value] = "header_value",
  [sym_header_value_segment] = "header_value_segment",
  [sym_header_continuation] = "header_continuation",
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
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
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
  [sym_url_continuation] = sym_url_continuation,
  [sym_header] = sym_header,
  [sym_header_value] = sym_header_value,
  [sym_header_value_segment] = sym_header_value_segment,
  [sym_header_continuation] = sym_header_continuation,
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
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
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
  [sym_url_continuation] = {
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
  [sym_header_continuation] = {
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
  [aux_sym_request_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
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
  [12] = {.index = 18, .length = 1},
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
  [18] =
    {field_value, 1},
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 41,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 58,
  [59] = 54,
  [60] = 54,
  [61] = 55,
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
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 87,
  [102] = 87,
  [103] = 103,
  [104] = 104,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '\n', 315,
        '\r', 1,
        '#', 105,
        '$', 294,
        '/', 13,
        ':', 140,
        '<', 290,
        '=', 311,
        '@', 108,
        'C', 165,
        'D', 150,
        'G', 151,
        'H', 152,
        'O', 168,
        'P', 144,
        'T', 169,
        'd', 180,
        'g', 231,
        'l', 214,
        'n', 181,
        'p', 219,
        'r', 182,
        't', 200,
        '{', 92,
        '}', 93,
        '\t', 2,
        ' ', 2,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(315);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 315,
        '\r', 1,
        '#', 105,
        '$', 294,
        '/', 13,
        ':', 140,
        '<', 290,
        '=', 311,
        '@', 108,
        'C', 165,
        'D', 150,
        'G', 151,
        'H', 152,
        'O', 168,
        'P', 144,
        'T', 169,
        'd', 180,
        'g', 231,
        'l', 214,
        'n', 181,
        'p', 219,
        'r', 182,
        't', 200,
        '{', 92,
        '}', 93,
        '\t', 2,
        ' ', 2,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 315,
        '\r', 1,
        '#', 105,
        '/', 13,
        '<', 290,
        '@', 108,
        'C', 257,
        'D', 244,
        'G', 245,
        'H', 246,
        'O', 259,
        'P', 239,
        'T', 260,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(316);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 316,
        '\r', 4,
        'H', 21,
        'd', 22,
        'g', 89,
        'l', 67,
        'n', 23,
        'p', 75,
        'r', 24,
        't', 51,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(288);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(314);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'j') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'v') ADVANCE(305);
      END_STATE();
    case 91:
      if (lookahead == 'v') ADVANCE(307);
      END_STATE();
    case 92:
      if (lookahead == '{') ADVANCE(291);
      END_STATE();
    case 93:
      if (lookahead == '}') ADVANCE(292);
      END_STATE();
    case 94:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(310);
      END_STATE();
    case 96:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 97:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 98:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '\n', 315,
        '\r', 1,
        '#', 105,
        '/', 13,
        '<', 290,
        '@', 108,
        'C', 257,
        'D', 244,
        'G', 245,
        'H', 246,
        'O', 259,
        'P', 239,
        'T', 260,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '\n', 315,
        '\r', 1,
        '#', 105,
        '/', 13,
        '@', 108,
        'C', 257,
        'D', 244,
        'G', 245,
        'H', 246,
        'O', 259,
        'P', 239,
        'T', 260,
        '}', 93,
        '\t', 102,
        ' ', 102,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_separator_label_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_separator_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(9);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(314);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_no_DASHredirect);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_no_DASHredirect);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_no_DASHcookie_DASHjar);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_no_DASHcookie_DASHjar);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_url_segment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'U') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'C') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'C') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'C') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'D') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'D') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'T') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'H') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'N') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'N') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'N') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'O') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'O') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'P') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'P') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'S') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'S') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'c') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 's') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 's') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'u') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'A') ADVANCE(265);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == 'U') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'C') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'H') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'L') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'N') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'O') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'P') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'R') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'S') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'T') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'j') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'k') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_header_value_segment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_header_value_segment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '@') ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_guid);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_guid);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_randomInt);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_randomInt);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_localDatetime);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_localDatetime);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_dotenv);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_dotenv);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_processEnv);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_processEnv);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_system_variable_args);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_system_variable_args);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_file_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 316:
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
  [4] = {.lex_state = 99, .external_lex_state = 2},
  [5] = {.lex_state = 99, .external_lex_state = 2},
  [6] = {.lex_state = 99, .external_lex_state = 2},
  [7] = {.lex_state = 99, .external_lex_state = 2},
  [8] = {.lex_state = 99, .external_lex_state = 2},
  [9] = {.lex_state = 98, .external_lex_state = 2},
  [10] = {.lex_state = 99, .external_lex_state = 2},
  [11] = {.lex_state = 98, .external_lex_state = 2},
  [12] = {.lex_state = 99, .external_lex_state = 2},
  [13] = {.lex_state = 99, .external_lex_state = 2},
  [14] = {.lex_state = 99, .external_lex_state = 2},
  [15] = {.lex_state = 98, .external_lex_state = 2},
  [16] = {.lex_state = 99, .external_lex_state = 2},
  [17] = {.lex_state = 98, .external_lex_state = 2},
  [18] = {.lex_state = 98, .external_lex_state = 3},
  [19] = {.lex_state = 98, .external_lex_state = 3},
  [20] = {.lex_state = 99, .external_lex_state = 2},
  [21] = {.lex_state = 99, .external_lex_state = 2},
  [22] = {.lex_state = 98, .external_lex_state = 3},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 98},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 98},
  [33] = {.lex_state = 98},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 98},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 98, .external_lex_state = 3},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 94},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 99},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 99},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 107},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 95},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 107},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 107},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 107},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 96},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 99},
  [99] = {.lex_state = 99},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
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
    [sym_document] = STATE(83),
    [sym_request_separator] = STATE(3),
    [sym_request] = STATE(3),
    [sym_annotation] = STATE(23),
    [sym_request_line] = STATE(91),
    [sym_method] = STATE(98),
    [sym_file_variable] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_request_repeat1] = STATE(23),
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
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(22), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(28), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      sym__blank_line,
    STATE(91), 1,
      sym_request_line,
    STATE(98), 1,
      sym_method,
    STATE(23), 2,
      sym_annotation,
      aux_sym_request_repeat1,
    STATE(2), 5,
      sym_request_separator,
      sym_request,
      sym_file_variable,
      sym_comment,
      aux_sym_document_repeat1,
    ACTIONS(31), 9,
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
    ACTIONS(5), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__blank_line,
    STATE(91), 1,
      sym_request_line,
    STATE(98), 1,
      sym_method,
    STATE(23), 2,
      sym_annotation,
      aux_sym_request_repeat1,
    STATE(2), 5,
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
  [94] = 8,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_request_separator_token1,
    ACTIONS(47), 1,
      sym_header_name,
    ACTIONS(49), 1,
      sym__body_separator,
    STATE(33), 1,
      sym_body,
    STATE(5), 2,
      sym_url_continuation,
      aux_sym_request_repeat2,
    STATE(9), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(43), 14,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
  [134] = 8,
    ACTIONS(45), 1,
      aux_sym_request_separator_token1,
    ACTIONS(47), 1,
      sym_header_name,
    ACTIONS(49), 1,
      sym__body_separator,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_body,
    STATE(10), 2,
      sym_url_continuation,
      aux_sym_request_repeat2,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(53), 14,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
  [174] = 8,
    ACTIONS(45), 1,
      aux_sym_request_separator_token1,
    ACTIONS(47), 1,
      sym_header_name,
    ACTIONS(49), 1,
      sym__body_separator,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_body,
    STATE(7), 2,
      sym_url_continuation,
      aux_sym_request_repeat2,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(53), 14,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
  [214] = 8,
    ACTIONS(45), 1,
      aux_sym_request_separator_token1,
    ACTIONS(47), 1,
      sym_header_name,
    ACTIONS(49), 1,
      sym__body_separator,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_body,
    STATE(10), 2,
      sym_url_continuation,
      aux_sym_request_repeat2,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(57), 14,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
  [254] = 4,
    ACTIONS(63), 1,
      aux_sym_request_separator_token1,
    ACTIONS(59), 2,
      sym__body_separator,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_header_continuation,
      aux_sym_header_repeat1,
    ACTIONS(61), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [283] = 6,
    ACTIONS(47), 1,
      sym_header_name,
    ACTIONS(49), 1,
      sym__body_separator,
    STATE(26), 1,
      sym_body,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(53), 10,
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
  [316] = 4,
    ACTIONS(69), 1,
      aux_sym_request_separator_token1,
    ACTIONS(65), 2,
      sym__body_separator,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_url_continuation,
      aux_sym_request_repeat2,
    ACTIONS(67), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [345] = 6,
    ACTIONS(47), 1,
      sym_header_name,
    ACTIONS(49), 1,
      sym__body_separator,
    STATE(31), 1,
      sym_body,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(57), 10,
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
  [378] = 4,
    ACTIONS(76), 1,
      aux_sym_request_separator_token1,
    ACTIONS(72), 2,
      sym__body_separator,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_header_continuation,
      aux_sym_header_repeat1,
    ACTIONS(74), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [407] = 4,
    ACTIONS(63), 1,
      aux_sym_request_separator_token1,
    ACTIONS(79), 2,
      sym__body_separator,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_header_continuation,
      aux_sym_header_repeat1,
    ACTIONS(81), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [436] = 4,
    ACTIONS(63), 1,
      aux_sym_request_separator_token1,
    ACTIONS(83), 2,
      sym__body_separator,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_header_continuation,
      aux_sym_header_repeat1,
    ACTIONS(85), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [465] = 6,
    ACTIONS(47), 1,
      sym_header_name,
    ACTIONS(49), 1,
      sym__body_separator,
    STATE(29), 1,
      sym_body,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(89), 10,
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
  [498] = 4,
    ACTIONS(63), 1,
      aux_sym_request_separator_token1,
    ACTIONS(91), 2,
      sym__body_separator,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_header_continuation,
      aux_sym_header_repeat1,
    ACTIONS(93), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [527] = 4,
    ACTIONS(99), 1,
      sym_header_name,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat3,
    ACTIONS(95), 6,
      sym__body_separator,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_SLASH_SLASH,
      anon_sym_AT,
      sym__blank_line,
    ACTIONS(97), 10,
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
  [555] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      sym__blank_line,
    ACTIONS(108), 1,
      sym_body_content,
    STATE(19), 2,
      sym_body_line,
      aux_sym_raw_body_repeat1,
    ACTIONS(102), 13,
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
  [584] = 5,
    ACTIONS(112), 1,
      anon_sym_POUND,
    ACTIONS(114), 1,
      sym__blank_line,
    ACTIONS(117), 1,
      sym_body_content,
    STATE(19), 2,
      sym_body_line,
      aux_sym_raw_body_repeat1,
    ACTIONS(110), 13,
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
  [613] = 2,
    ACTIONS(120), 3,
      sym__body_separator,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(122), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [636] = 2,
    ACTIONS(124), 3,
      sym__body_separator,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(126), 15,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND,
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
      sym_header_name,
      sym__blank_line,
  [659] = 2,
    ACTIONS(130), 1,
      anon_sym_POUND,
    ACTIONS(128), 15,
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
  [680] = 5,
    STATE(97), 1,
      sym_request_line,
    STATE(98), 1,
      sym_method,
    ACTIONS(132), 2,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH,
    STATE(35), 2,
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
  [706] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(134), 14,
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
  [726] = 2,
    ACTIONS(140), 1,
      anon_sym_POUND,
    ACTIONS(138), 14,
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
  [746] = 2,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(55), 14,
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
  [766] = 2,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(142), 14,
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
  [786] = 2,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(146), 14,
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
  [806] = 2,
    ACTIONS(152), 1,
      anon_sym_POUND,
    ACTIONS(150), 14,
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
  [826] = 2,
    ACTIONS(156), 1,
      anon_sym_POUND,
    ACTIONS(154), 14,
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
  [846] = 2,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(87), 14,
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
  [866] = 2,
    ACTIONS(160), 1,
      anon_sym_POUND,
    ACTIONS(158), 14,
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
  [886] = 2,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(51), 14,
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
  [906] = 2,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(162), 14,
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
  [926] = 3,
    ACTIONS(166), 2,
      anon_sym_POUND,
      anon_sym_SLASH_SLASH,
    STATE(35), 2,
      sym_annotation,
      aux_sym_request_repeat1,
    ACTIONS(169), 9,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_PATCH,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_CONNECT,
      anon_sym_TRACE,
  [946] = 1,
    ACTIONS(171), 11,
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
  [960] = 1,
    ACTIONS(173), 11,
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
  [974] = 2,
    STATE(72), 1,
      sym_system_variable_name,
    ACTIONS(175), 7,
      anon_sym_guid,
      anon_sym_randomInt,
      anon_sym_timestamp,
      anon_sym_datetime,
      anon_sym_localDatetime,
      anon_sym_dotenv,
      anon_sym_processEnv,
  [987] = 6,
    ACTIONS(108), 1,
      sym_body_content,
    ACTIONS(177), 1,
      anon_sym_LT_AT,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__blank_line,
    STATE(18), 2,
      sym_body_line,
      aux_sym_raw_body_repeat1,
    STATE(27), 2,
      sym_file_reference,
      sym_raw_body,
  [1008] = 4,
    ACTIONS(183), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(186), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(189), 1,
      sym__newline,
    STATE(40), 3,
      sym_variable,
      sym_file_variable_raw,
      aux_sym_file_variable_value_repeat1,
  [1023] = 5,
    ACTIONS(191), 1,
      aux_sym_request_separator_token1,
    ACTIONS(193), 1,
      sym_url_segment,
    ACTIONS(196), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(199), 1,
      sym__newline,
    STATE(41), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [1040] = 2,
    STATE(71), 1,
      sym_annotation_name,
    ACTIONS(201), 5,
      anon_sym_name,
      anon_sym_prompt,
      anon_sym_note,
      anon_sym_no_DASHredirect,
      anon_sym_no_DASHcookie_DASHjar,
  [1051] = 4,
    ACTIONS(203), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(207), 1,
      sym__newline,
    STATE(40), 3,
      sym_variable,
      sym_file_variable_raw,
      aux_sym_file_variable_value_repeat1,
  [1066] = 4,
    ACTIONS(205), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(209), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(211), 1,
      sym__newline,
    STATE(45), 3,
      sym_header_value_segment,
      sym_variable,
      aux_sym_header_value_repeat1,
  [1081] = 4,
    ACTIONS(213), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(216), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(219), 1,
      sym__newline,
    STATE(45), 3,
      sym_header_value_segment,
      sym_variable,
      aux_sym_header_value_repeat1,
  [1096] = 4,
    ACTIONS(205), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(209), 1,
      aux_sym_header_value_segment_token1,
    STATE(74), 1,
      sym_header_value,
    STATE(44), 3,
      sym_header_value_segment,
      sym_variable,
      aux_sym_header_value_repeat1,
  [1111] = 5,
    ACTIONS(221), 1,
      aux_sym_request_separator_token1,
    ACTIONS(223), 1,
      sym_url_segment,
    ACTIONS(225), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(227), 1,
      sym__newline,
    STATE(41), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [1128] = 4,
    ACTIONS(205), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(209), 1,
      aux_sym_header_value_segment_token1,
    STATE(81), 1,
      sym_header_value,
    STATE(44), 3,
      sym_header_value_segment,
      sym_variable,
      aux_sym_header_value_repeat1,
  [1143] = 4,
    ACTIONS(203), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(205), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(76), 1,
      sym_file_variable_value,
    STATE(43), 3,
      sym_variable,
      sym_file_variable_raw,
      aux_sym_file_variable_value_repeat1,
  [1158] = 4,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(229), 1,
      sym_url_segment,
    ACTIONS(232), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(50), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [1172] = 4,
    ACTIONS(235), 1,
      sym_url_segment,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(239), 1,
      sym__newline,
    STATE(50), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [1186] = 4,
    ACTIONS(241), 1,
      sym_url_segment,
    ACTIONS(243), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 1,
      sym_url,
    STATE(47), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [1200] = 3,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(245), 1,
      sym_url_segment,
    STATE(51), 2,
      sym_variable,
      aux_sym_url_repeat1,
  [1211] = 2,
    ACTIONS(247), 1,
      aux_sym_request_separator_token1,
    ACTIONS(249), 3,
      sym_url_segment,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [1220] = 3,
    ACTIONS(251), 1,
      sym_variable_name,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_system_variable,
  [1230] = 3,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    ACTIONS(255), 1,
      sym_variable_name,
    STATE(102), 1,
      sym_system_variable,
  [1240] = 2,
    ACTIONS(257), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(259), 2,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [1248] = 2,
    ACTIONS(261), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(263), 2,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [1256] = 1,
    ACTIONS(247), 3,
      sym_url_segment,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [1262] = 2,
    ACTIONS(247), 1,
      aux_sym_header_value_segment_token1,
    ACTIONS(249), 2,
      anon_sym_LBRACE_LBRACE,
      sym__newline,
  [1270] = 3,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      sym_variable_name,
    STATE(101), 1,
      sym_system_variable,
  [1280] = 2,
    ACTIONS(267), 1,
      aux_sym_request_separator_token1,
    ACTIONS(269), 1,
      sym__newline,
  [1287] = 2,
    ACTIONS(271), 1,
      aux_sym_separator_label_token1,
    STATE(103), 1,
      sym_annotation_value,
  [1294] = 2,
    ACTIONS(273), 1,
      aux_sym_separator_label_token1,
    STATE(79), 1,
      sym_file_path,
  [1301] = 2,
    ACTIONS(275), 1,
      aux_sym_separator_label_token1,
    STATE(75), 1,
      sym_separator_label,
  [1308] = 2,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      sym_comment_text,
  [1315] = 2,
    ACTIONS(281), 1,
      aux_sym_annotation_token1,
    ACTIONS(283), 1,
      sym__newline,
  [1322] = 2,
    ACTIONS(285), 1,
      aux_sym_request_separator_token1,
    ACTIONS(287), 1,
      sym__newline,
  [1329] = 2,
    ACTIONS(289), 1,
      aux_sym_request_separator_token1,
    ACTIONS(291), 1,
      anon_sym_RBRACE_RBRACE,
  [1336] = 2,
    ACTIONS(293), 1,
      aux_sym_request_separator_token1,
    ACTIONS(295), 1,
      sym__newline,
  [1343] = 2,
    ACTIONS(297), 1,
      aux_sym_request_separator_token1,
    ACTIONS(299), 1,
      sym__newline,
  [1350] = 2,
    ACTIONS(301), 1,
      aux_sym_request_separator_token1,
    ACTIONS(303), 1,
      anon_sym_RBRACE_RBRACE,
  [1357] = 2,
    ACTIONS(305), 1,
      aux_sym_annotation_token1,
    ACTIONS(307), 1,
      sym__newline,
  [1364] = 1,
    ACTIONS(309), 1,
      sym__newline,
  [1368] = 1,
    ACTIONS(311), 1,
      sym__newline,
  [1372] = 1,
    ACTIONS(313), 1,
      sym__newline,
  [1376] = 1,
    ACTIONS(315), 1,
      anon_sym_AT,
  [1380] = 1,
    ACTIONS(317), 1,
      sym__newline,
  [1384] = 1,
    ACTIONS(319), 1,
      sym__newline,
  [1388] = 1,
    ACTIONS(321), 1,
      sym__newline,
  [1392] = 1,
    ACTIONS(323), 1,
      sym__newline,
  [1396] = 1,
    ACTIONS(325), 1,
      aux_sym_annotation_token1,
  [1400] = 1,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [1404] = 1,
    ACTIONS(329), 1,
      anon_sym_COLON,
  [1408] = 1,
    ACTIONS(331), 1,
      sym_system_variable_args,
  [1412] = 1,
    ACTIONS(333), 1,
      anon_sym_EQ,
  [1416] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACE_RBRACE,
  [1420] = 1,
    ACTIONS(337), 1,
      aux_sym_annotation_token1,
  [1424] = 1,
    ACTIONS(339), 1,
      sym__newline,
  [1428] = 1,
    ACTIONS(341), 1,
      aux_sym_annotation_token1,
  [1432] = 1,
    ACTIONS(343), 1,
      sym__newline,
  [1436] = 1,
    ACTIONS(345), 1,
      aux_sym_annotation_token1,
  [1440] = 1,
    ACTIONS(347), 1,
      sym__newline,
  [1444] = 1,
    ACTIONS(349), 1,
      sym_file_variable_name,
  [1448] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACE_RBRACE,
  [1452] = 1,
    ACTIONS(353), 1,
      sym__newline,
  [1456] = 1,
    ACTIONS(355), 1,
      sym__newline,
  [1460] = 1,
    ACTIONS(357), 1,
      aux_sym_request_separator_token1,
  [1464] = 1,
    ACTIONS(359), 1,
      aux_sym_request_separator_token1,
  [1468] = 1,
    ACTIONS(361), 1,
      sym__newline,
  [1472] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACE_RBRACE,
  [1476] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACE_RBRACE,
  [1480] = 1,
    ACTIONS(367), 1,
      sym__newline,
  [1484] = 1,
    ACTIONS(369), 1,
      sym_http_version,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 436,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 498,
  [SMALL_STATE(17)] = 527,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 636,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 680,
  [SMALL_STATE(24)] = 706,
  [SMALL_STATE(25)] = 726,
  [SMALL_STATE(26)] = 746,
  [SMALL_STATE(27)] = 766,
  [SMALL_STATE(28)] = 786,
  [SMALL_STATE(29)] = 806,
  [SMALL_STATE(30)] = 826,
  [SMALL_STATE(31)] = 846,
  [SMALL_STATE(32)] = 866,
  [SMALL_STATE(33)] = 886,
  [SMALL_STATE(34)] = 906,
  [SMALL_STATE(35)] = 926,
  [SMALL_STATE(36)] = 946,
  [SMALL_STATE(37)] = 960,
  [SMALL_STATE(38)] = 974,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1008,
  [SMALL_STATE(41)] = 1023,
  [SMALL_STATE(42)] = 1040,
  [SMALL_STATE(43)] = 1051,
  [SMALL_STATE(44)] = 1066,
  [SMALL_STATE(45)] = 1081,
  [SMALL_STATE(46)] = 1096,
  [SMALL_STATE(47)] = 1111,
  [SMALL_STATE(48)] = 1128,
  [SMALL_STATE(49)] = 1143,
  [SMALL_STATE(50)] = 1158,
  [SMALL_STATE(51)] = 1172,
  [SMALL_STATE(52)] = 1186,
  [SMALL_STATE(53)] = 1200,
  [SMALL_STATE(54)] = 1211,
  [SMALL_STATE(55)] = 1220,
  [SMALL_STATE(56)] = 1230,
  [SMALL_STATE(57)] = 1240,
  [SMALL_STATE(58)] = 1248,
  [SMALL_STATE(59)] = 1256,
  [SMALL_STATE(60)] = 1262,
  [SMALL_STATE(61)] = 1270,
  [SMALL_STATE(62)] = 1280,
  [SMALL_STATE(63)] = 1287,
  [SMALL_STATE(64)] = 1294,
  [SMALL_STATE(65)] = 1301,
  [SMALL_STATE(66)] = 1308,
  [SMALL_STATE(67)] = 1315,
  [SMALL_STATE(68)] = 1322,
  [SMALL_STATE(69)] = 1329,
  [SMALL_STATE(70)] = 1336,
  [SMALL_STATE(71)] = 1343,
  [SMALL_STATE(72)] = 1350,
  [SMALL_STATE(73)] = 1357,
  [SMALL_STATE(74)] = 1364,
  [SMALL_STATE(75)] = 1368,
  [SMALL_STATE(76)] = 1372,
  [SMALL_STATE(77)] = 1376,
  [SMALL_STATE(78)] = 1380,
  [SMALL_STATE(79)] = 1384,
  [SMALL_STATE(80)] = 1388,
  [SMALL_STATE(81)] = 1392,
  [SMALL_STATE(82)] = 1396,
  [SMALL_STATE(83)] = 1400,
  [SMALL_STATE(84)] = 1404,
  [SMALL_STATE(85)] = 1408,
  [SMALL_STATE(86)] = 1412,
  [SMALL_STATE(87)] = 1416,
  [SMALL_STATE(88)] = 1420,
  [SMALL_STATE(89)] = 1424,
  [SMALL_STATE(90)] = 1428,
  [SMALL_STATE(91)] = 1432,
  [SMALL_STATE(92)] = 1436,
  [SMALL_STATE(93)] = 1440,
  [SMALL_STATE(94)] = 1444,
  [SMALL_STATE(95)] = 1448,
  [SMALL_STATE(96)] = 1452,
  [SMALL_STATE(97)] = 1456,
  [SMALL_STATE(98)] = 1460,
  [SMALL_STATE(99)] = 1464,
  [SMALL_STATE(100)] = 1468,
  [SMALL_STATE(101)] = 1472,
  [SMALL_STATE(102)] = 1476,
  [SMALL_STATE(103)] = 1480,
  [SMALL_STATE(104)] = 1484,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 10),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(84),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_body_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_continuation, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_continuation, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_continuation, 3, 0, 12),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_continuation, 3, 0, 12),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_variable, 7, 0, 8),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_variable, 7, 0, 8),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_reference, 4, 0, 9),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_reference, 4, 0, 9),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 7, 0, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_variable_value_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_variable_value_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_variable_value_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_variable_value, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value_segment, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value_segment, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_variable_raw, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_variable_raw, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 3, 0, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable_name, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable_name, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_variable, 2, 0, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [327] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator_label, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_variable, 4, 0, 11),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_line, 5, 0, 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
