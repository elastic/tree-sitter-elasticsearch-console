#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_GET = 1,
  anon_sym_HEAD = 2,
  anon_sym_DELETE = 3,
  anon_sym_POST = 4,
  anon_sym_PUT = 5,
  sym_request_path = 6,
  sym_request_body = 7,
  sym_source_file = 8,
  sym_request_type = 9,
  sym_request = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [sym_request_path] = "request_path",
  [sym_request_body] = "request_body",
  [sym_source_file] = "source_file",
  [sym_request_type] = "request_type",
  [sym_request] = "request",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [sym_request_path] = sym_request_path,
  [sym_request_body] = sym_request_body,
  [sym_source_file] = sym_source_file,
  [sym_request_type] = sym_request_type,
  [sym_request] = sym_request,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_request_body] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_request_type] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'G') ADVANCE(5);
      if (lookahead == 'H') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == '{') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(11);
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(27);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_request_path);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '?') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_request_path);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_request_path);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_request_body);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [sym_request_body] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_request_type] = STATE(8),
    [sym_request] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
  },
  [2] = {
    [sym_request_type] = STATE(8),
    [sym_request] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(5),
    [anon_sym_HEAD] = ACTIONS(5),
    [anon_sym_DELETE] = ACTIONS(5),
    [anon_sym_POST] = ACTIONS(5),
    [anon_sym_PUT] = ACTIONS(5),
  },
  [3] = {
    [sym_request_type] = STATE(8),
    [sym_request] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_GET] = ACTIONS(11),
    [anon_sym_HEAD] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(11),
    [anon_sym_POST] = ACTIONS(11),
    [anon_sym_PUT] = ACTIONS(11),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(14),
    [anon_sym_GET] = ACTIONS(14),
    [anon_sym_HEAD] = ACTIONS(14),
    [anon_sym_DELETE] = ACTIONS(14),
    [anon_sym_POST] = ACTIONS(14),
    [anon_sym_PUT] = ACTIONS(14),
    [sym_request_body] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(18), 6,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_DELETE,
      anon_sym_POST,
      anon_sym_PUT,
  [9] = 1,
    ACTIONS(20), 1,
      sym_request_path,
  [13] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
  [17] = 1,
    ACTIONS(24), 1,
      sym_request_path,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 9,
  [SMALL_STATE(7)] = 13,
  [SMALL_STATE(8)] = 17,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_type, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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

TS_PUBLIC const TSLanguage *tree_sitter_kibana_dev_console(void) {
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
