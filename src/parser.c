#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_GET = 1,
  anon_sym_HEAD = 2,
  anon_sym_DELETE = 3,
  anon_sym_POST = 4,
  anon_sym_PUT = 5,
  sym_request_path = 6,
  anon_sym_null = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  sym__json_number = 10,
  anon_sym_DQUOTE = 11,
  aux_sym__json_string_token1 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_COMMA = 16,
  aux_sym__json_object_def_token1 = 17,
  anon_sym_COLON = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  sym_source_file = 21,
  sym_request_type = 22,
  sym_request_body = 23,
  sym_request = 24,
  sym__json_value = 25,
  sym__json_null = 26,
  sym__json_boolean = 27,
  sym__json_string = 28,
  sym__json_array = 29,
  sym__json_object_def = 30,
  sym__json_object = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym__json_array_repeat1 = 33,
  aux_sym__json_object_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [sym_request_path] = "request_path",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__json_number] = "_json_number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__json_string_token1] = "_json_string_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [aux_sym__json_object_def_token1] = "_json_object_def_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_request_type] = "request_type",
  [sym_request_body] = "request_body",
  [sym_request] = "request",
  [sym__json_value] = "_json_value",
  [sym__json_null] = "_json_null",
  [sym__json_boolean] = "_json_boolean",
  [sym__json_string] = "_json_string",
  [sym__json_array] = "_json_array",
  [sym__json_object_def] = "_json_object_def",
  [sym__json_object] = "_json_object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__json_array_repeat1] = "_json_array_repeat1",
  [aux_sym__json_object_repeat1] = "_json_object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [sym_request_path] = sym_request_path,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__json_number] = sym__json_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__json_string_token1] = aux_sym__json_string_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__json_object_def_token1] = aux_sym__json_object_def_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_request_type] = sym_request_type,
  [sym_request_body] = sym_request_body,
  [sym_request] = sym_request,
  [sym__json_value] = sym__json_value,
  [sym__json_null] = sym__json_null,
  [sym__json_boolean] = sym__json_boolean,
  [sym__json_string] = sym__json_string,
  [sym__json_array] = sym__json_array,
  [sym__json_object_def] = sym__json_object_def,
  [sym__json_object] = sym__json_object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__json_array_repeat1] = aux_sym__json_array_repeat1,
  [aux_sym__json_object_repeat1] = aux_sym__json_object_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
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
  [sym_request_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__json_number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_object_def_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_request_type] = {
    .visible = true,
    .named = true,
  },
  [sym_request_body] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [sym__json_null] = {
    .visible = false,
    .named = true,
  },
  [sym__json_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__json_string] = {
    .visible = false,
    .named = true,
  },
  [sym__json_array] = {
    .visible = false,
    .named = true,
  },
  [sym__json_object_def] = {
    .visible = false,
    .named = true,
  },
  [sym__json_object] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '"', 48,
        ',', 54,
        '-', 29,
        ':', 57,
        'D', 6,
        'G', 7,
        'H', 8,
        'P', 12,
        '[', 52,
        ']', 53,
        'f', 18,
        'n', 27,
        't', 24,
        '{', 58,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 28:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_request_path);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '?') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_request_path);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_request_path);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__json_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__json_object_def_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__json_object_def_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym__json_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_request_type] = STATE(32),
    [sym_request] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      aux_sym__json_array_repeat1,
    ACTIONS(7), 4,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym__json_number,
    STATE(25), 6,
      sym__json_value,
      sym__json_null,
      sym__json_boolean,
      sym__json_string,
      sym__json_array,
      sym__json_object,
  [33] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym__json_array_repeat1,
    ACTIONS(19), 4,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym__json_number,
    STATE(24), 6,
      sym__json_value,
      sym__json_null,
      sym__json_boolean,
      sym__json_string,
      sym__json_array,
      sym__json_object,
  [63] = 7,
    ACTIONS(24), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym__json_array_repeat1,
    ACTIONS(21), 4,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym__json_number,
    STATE(39), 6,
      sym__json_value,
      sym__json_null,
      sym__json_boolean,
      sym__json_string,
      sym__json_array,
      sym__json_object,
  [93] = 6,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 4,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym__json_number,
    STATE(26), 6,
      sym__json_value,
      sym__json_null,
      sym__json_boolean,
      sym__json_string,
      sym__json_array,
      sym__json_object,
  [120] = 4,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_request_type,
    STATE(6), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(40), 5,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
  [138] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_request_body,
    STATE(14), 1,
      sym__json_object,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
  [156] = 1,
    ACTIONS(45), 9,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [168] = 1,
    ACTIONS(47), 9,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [180] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_request_type,
    STATE(6), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 5,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
  [198] = 1,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [210] = 2,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 7,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      sym__json_number,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [223] = 1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
  [232] = 1,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
  [241] = 4,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__json_object_repeat1,
    STATE(22), 1,
      sym__json_object_def,
  [254] = 3,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym__json_object_repeat1,
    STATE(31), 1,
      sym__json_object_def,
  [264] = 3,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym__json_object_repeat1,
    STATE(23), 1,
      sym__json_object_def,
  [274] = 1,
    ACTIONS(68), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [280] = 1,
    ACTIONS(70), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [286] = 1,
    ACTIONS(72), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [292] = 1,
    ACTIONS(74), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [298] = 2,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
  [305] = 2,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
  [312] = 2,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      anon_sym_COMMA,
  [319] = 2,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
  [326] = 1,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [331] = 1,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
  [335] = 1,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
  [339] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [343] = 1,
    ACTIONS(96), 1,
      anon_sym_COLON,
  [347] = 1,
    ACTIONS(76), 1,
      anon_sym_COMMA,
  [351] = 1,
    ACTIONS(98), 1,
      sym_request_path,
  [355] = 1,
    ACTIONS(100), 1,
      aux_sym__json_string_token1,
  [359] = 1,
    ACTIONS(102), 1,
      aux_sym__json_string_token1,
  [363] = 1,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
  [367] = 1,
    ACTIONS(106), 1,
      aux_sym__json_object_def_token1,
  [371] = 1,
    ACTIONS(104), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [375] = 1,
    ACTIONS(108), 1,
      sym_request_path,
  [379] = 1,
    ACTIONS(84), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 280,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 292,
  [SMALL_STATE(22)] = 298,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 312,
  [SMALL_STATE(25)] = 319,
  [SMALL_STATE(26)] = 326,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 335,
  [SMALL_STATE(29)] = 339,
  [SMALL_STATE(30)] = 343,
  [SMALL_STATE(31)] = 347,
  [SMALL_STATE(32)] = 351,
  [SMALL_STATE(33)] = 355,
  [SMALL_STATE(34)] = 359,
  [SMALL_STATE(35)] = 363,
  [SMALL_STATE(36)] = 367,
  [SMALL_STATE(37)] = 371,
  [SMALL_STATE(38)] = 375,
  [SMALL_STATE(39)] = 379,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_array_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_body, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_string, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object_def, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_object_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_type, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_elasticsearch_console(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
