#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PIPE_PERCENT = 1,
  anon_sym_DASH_DASH = 2,
  anon_sym_PLUS_PLUS = 3,
  sym_identifier = 4,
  aux_sym_any_token1 = 5,
  aux_sym_any_token2 = 6,
  sym_comment = 7,
  sym_document = 8,
  sym__value = 9,
  sym_token = 10,
  sym_barcen = 11,
  sym_luslus = 12,
  sym_any = 13,
  aux_sym_document_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE_PERCENT] = "|%",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
  [sym_identifier] = "identifier",
  [aux_sym_any_token1] = "any_token1",
  [aux_sym_any_token2] = "any_token2",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_token] = "token",
  [sym_barcen] = "barcen",
  [sym_luslus] = "luslus",
  [sym_any] = "any",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE_PERCENT] = anon_sym_PIPE_PERCENT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [sym_identifier] = sym_identifier,
  [aux_sym_any_token1] = aux_sym_any_token1,
  [aux_sym_any_token2] = aux_sym_any_token2,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_token] = sym_token,
  [sym_barcen] = sym_barcen,
  [sym_luslus] = sym_luslus,
  [sym_any] = sym_any,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_any_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_any_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_barcen] = {
    .visible = true,
    .named = true,
  },
  [sym_luslus] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 9,
  [15] = 11,
  [16] = 8,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 18,
  [22] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PIPE_PERCENT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_any_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_any_token1);
      if (lookahead == '%') ADVANCE(6);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_any_token1);
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_any_token1);
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_any_token2);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_any_token2);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_any_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_any_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(12),
    [sym__value] = STATE(2),
    [sym_token] = STATE(2),
    [sym_barcen] = STATE(9),
    [sym_luslus] = STATE(9),
    [sym_any] = STATE(9),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PIPE_PERCENT] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
    [aux_sym_any_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(3),
    [sym_token] = STATE(3),
    [sym_barcen] = STATE(9),
    [sym_luslus] = STATE(9),
    [sym_any] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_PIPE_PERCENT] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
    [aux_sym_any_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(3),
    [sym_token] = STATE(3),
    [sym_barcen] = STATE(9),
    [sym_luslus] = STATE(9),
    [sym_any] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_PIPE_PERCENT] = ACTIONS(17),
    [anon_sym_PLUS_PLUS] = ACTIONS(20),
    [aux_sym_any_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_token] = STATE(20),
    [sym_barcen] = STATE(14),
    [sym_luslus] = STATE(14),
    [sym_any] = STATE(14),
    [anon_sym_PIPE_PERCENT] = ACTIONS(26),
    [anon_sym_PLUS_PLUS] = ACTIONS(28),
    [aux_sym_any_token1] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_token] = STATE(19),
    [sym_barcen] = STATE(14),
    [sym_luslus] = STATE(14),
    [sym_any] = STATE(14),
    [anon_sym_PIPE_PERCENT] = ACTIONS(26),
    [anon_sym_PLUS_PLUS] = ACTIONS(28),
    [aux_sym_any_token1] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_token] = STATE(17),
    [sym_barcen] = STATE(14),
    [sym_luslus] = STATE(14),
    [sym_any] = STATE(14),
    [anon_sym_PIPE_PERCENT] = ACTIONS(26),
    [anon_sym_PLUS_PLUS] = ACTIONS(28),
    [aux_sym_any_token1] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_token] = STATE(10),
    [sym_barcen] = STATE(9),
    [sym_luslus] = STATE(9),
    [sym_any] = STATE(9),
    [anon_sym_PIPE_PERCENT] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
    [aux_sym_any_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym_any_token1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PERCENT,
      anon_sym_PLUS_PLUS,
  [12] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      aux_sym_any_token1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PERCENT,
      anon_sym_PLUS_PLUS,
  [24] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym_any_token1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PERCENT,
      anon_sym_PLUS_PLUS,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym_any_token1,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE_PERCENT,
      anon_sym_PLUS_PLUS,
  [48] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [55] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_identifier,
  [62] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_DASH_DASH,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_DASH_DASH,
  [76] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_DASH_DASH,
  [83] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_DASH_DASH,
  [90] = 2,
    ACTIONS(52), 1,
      aux_sym_any_token2,
    ACTIONS(54), 1,
      sym_comment,
  [97] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DASH_DASH,
  [104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DASH_DASH,
  [111] = 2,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(60), 1,
      aux_sym_any_token2,
  [118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 12,
  [SMALL_STATE(10)] = 24,
  [SMALL_STATE(11)] = 36,
  [SMALL_STATE(12)] = 48,
  [SMALL_STATE(13)] = 55,
  [SMALL_STATE(14)] = 62,
  [SMALL_STATE(15)] = 69,
  [SMALL_STATE(16)] = 76,
  [SMALL_STATE(17)] = 83,
  [SMALL_STATE(18)] = 90,
  [SMALL_STATE(19)] = 97,
  [SMALL_STATE(20)] = 104,
  [SMALL_STATE(21)] = 111,
  [SMALL_STATE(22)] = 118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_barcen, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_barcen, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_luslus, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_luslus, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 2),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_YOUR_LANGUAGE_NAME(void) {
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
