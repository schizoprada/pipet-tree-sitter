#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_curl = 3,
  anon_sym_playwright = 4,
  sym_url = 5,
  anon_sym_GT = 6,
  sym_indentation = 7,
  sym_css_selector_query = 8,
  sym_json_query = 9,
  sym_js_query = 10,
  aux_sym_css_selector_token1 = 11,
  anon_sym_PIPE = 12,
  sym_source_file = 13,
  sym_block = 14,
  sym_resource_directive = 15,
  sym_resource_type = 16,
  sym_query_line = 17,
  sym_next_page_line = 18,
  sym_css_selector = 19,
  sym_pipe_command = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_block_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_curl] = "curl",
  [anon_sym_playwright] = "playwright",
  [sym_url] = "url",
  [anon_sym_GT] = ">",
  [sym_indentation] = "indentation",
  [sym_css_selector_query] = "css_selector_query",
  [sym_json_query] = "json_query",
  [sym_js_query] = "js_query",
  [aux_sym_css_selector_token1] = "css_selector_token1",
  [anon_sym_PIPE] = "|",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_resource_directive] = "resource_directive",
  [sym_resource_type] = "resource_type",
  [sym_query_line] = "query_line",
  [sym_next_page_line] = "next_page_line",
  [sym_css_selector] = "css_selector",
  [sym_pipe_command] = "pipe_command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_curl] = anon_sym_curl,
  [anon_sym_playwright] = anon_sym_playwright,
  [sym_url] = sym_url,
  [anon_sym_GT] = anon_sym_GT,
  [sym_indentation] = sym_indentation,
  [sym_css_selector_query] = sym_css_selector_query,
  [sym_json_query] = sym_json_query,
  [sym_js_query] = sym_js_query,
  [aux_sym_css_selector_token1] = aux_sym_css_selector_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_resource_directive] = sym_resource_directive,
  [sym_resource_type] = sym_resource_type,
  [sym_query_line] = sym_query_line,
  [sym_next_page_line] = sym_next_page_line,
  [sym_css_selector] = sym_css_selector,
  [sym_pipe_command] = sym_pipe_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_curl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_playwright] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_indentation] = {
    .visible = true,
    .named = true,
  },
  [sym_css_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym_json_query] = {
    .visible = true,
    .named = true,
  },
  [sym_js_query] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_css_selector_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_type] = {
    .visible = true,
    .named = true,
  },
  [sym_query_line] = {
    .visible = true,
    .named = true,
  },
  [sym_next_page_line] = {
    .visible = true,
    .named = true,
  },
  [sym_css_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_selector = 1,
  field_type = 2,
  field_url = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_selector] = "selector",
  [field_type] = "type",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
    {field_url, 1},
  [2] =
    {field_selector, 1},
  [3] =
    {field_selector, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'g') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(26);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_curl);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_curl);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_playwright);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_playwright);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_indentation);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'g') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == 'y') ADVANCE(39);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_css_selector_query);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_json_query);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_js_query);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_js_query);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_css_selector_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_css_selector_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_curl] = ACTIONS(1),
    [anon_sym_playwright] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_css_selector_query] = ACTIONS(1),
    [sym_json_query] = ACTIONS(1),
    [sym_js_query] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_block] = STATE(10),
    [sym_resource_directive] = STATE(18),
    [sym_resource_type] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_curl] = ACTIONS(7),
    [anon_sym_playwright] = ACTIONS(7),
  },
  [2] = {
    [sym_query_line] = STATE(2),
    [sym_next_page_line] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [anon_sym_curl] = ACTIONS(11),
    [anon_sym_playwright] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(13),
    [sym_indentation] = ACTIONS(16),
    [sym_css_selector_query] = ACTIONS(19),
    [sym_json_query] = ACTIONS(19),
    [sym_js_query] = ACTIONS(19),
  },
  [3] = {
    [sym_query_line] = STATE(4),
    [sym_next_page_line] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(22),
    [anon_sym_LF] = ACTIONS(24),
    [sym_comment] = ACTIONS(24),
    [anon_sym_curl] = ACTIONS(24),
    [anon_sym_playwright] = ACTIONS(24),
    [anon_sym_GT] = ACTIONS(26),
    [sym_indentation] = ACTIONS(28),
    [sym_css_selector_query] = ACTIONS(30),
    [sym_json_query] = ACTIONS(30),
    [sym_js_query] = ACTIONS(30),
  },
  [4] = {
    [sym_query_line] = STATE(2),
    [sym_next_page_line] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(34),
    [sym_comment] = ACTIONS(34),
    [anon_sym_curl] = ACTIONS(34),
    [anon_sym_playwright] = ACTIONS(34),
    [anon_sym_GT] = ACTIONS(26),
    [sym_indentation] = ACTIONS(28),
    [sym_css_selector_query] = ACTIONS(30),
    [sym_json_query] = ACTIONS(30),
    [sym_js_query] = ACTIONS(30),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym_indentation,
    ACTIONS(38), 8,
      anon_sym_LF,
      sym_comment,
      anon_sym_curl,
      anon_sym_playwright,
      anon_sym_GT,
      sym_css_selector_query,
      sym_json_query,
      sym_js_query,
  [15] = 2,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_indentation,
    ACTIONS(42), 8,
      anon_sym_LF,
      sym_comment,
      anon_sym_curl,
      anon_sym_playwright,
      anon_sym_GT,
      sym_css_selector_query,
      sym_json_query,
      sym_js_query,
  [30] = 2,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_indentation,
    ACTIONS(46), 8,
      anon_sym_LF,
      sym_comment,
      anon_sym_curl,
      anon_sym_playwright,
      anon_sym_GT,
      sym_css_selector_query,
      sym_json_query,
      sym_js_query,
  [45] = 2,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_indentation,
    ACTIONS(50), 8,
      anon_sym_LF,
      sym_comment,
      anon_sym_curl,
      anon_sym_playwright,
      anon_sym_GT,
      sym_css_selector_query,
      sym_json_query,
      sym_js_query,
  [60] = 2,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_indentation,
    ACTIONS(54), 8,
      anon_sym_LF,
      sym_comment,
      anon_sym_curl,
      anon_sym_playwright,
      anon_sym_GT,
      sym_css_selector_query,
      sym_json_query,
      sym_js_query,
  [75] = 6,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_resource_directive,
    STATE(27), 1,
      sym_resource_type,
    ACTIONS(7), 2,
      anon_sym_curl,
      anon_sym_playwright,
    ACTIONS(58), 2,
      anon_sym_LF,
      sym_comment,
    STATE(11), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [97] = 6,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_resource_directive,
    STATE(27), 1,
      sym_resource_type,
    ACTIONS(62), 2,
      anon_sym_LF,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_curl,
      anon_sym_playwright,
    STATE(11), 2,
      sym_block,
      aux_sym_source_file_repeat1,
  [119] = 3,
    ACTIONS(68), 1,
      anon_sym_GT,
    ACTIONS(70), 1,
      sym_css_selector_query,
    ACTIONS(72), 2,
      sym_json_query,
      sym_js_query,
  [130] = 3,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_pipe_command,
  [140] = 3,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(78), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym_pipe_command,
  [150] = 2,
    ACTIONS(80), 1,
      aux_sym_css_selector_token1,
    STATE(17), 1,
      sym_css_selector,
  [157] = 2,
    ACTIONS(80), 1,
      aux_sym_css_selector_token1,
    STATE(23), 1,
      sym_css_selector,
  [164] = 1,
    ACTIONS(82), 1,
      anon_sym_LF,
  [168] = 1,
    ACTIONS(84), 1,
      anon_sym_LF,
  [172] = 1,
    ACTIONS(86), 1,
      aux_sym_css_selector_token1,
  [176] = 1,
    ACTIONS(74), 1,
      anon_sym_LF,
  [180] = 1,
    ACTIONS(88), 1,
      sym_url,
  [184] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [188] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
  [192] = 1,
    ACTIONS(94), 1,
      anon_sym_LF,
  [196] = 1,
    ACTIONS(96), 1,
      anon_sym_LF,
  [200] = 1,
    ACTIONS(98), 1,
      anon_sym_LF,
  [204] = 1,
    ACTIONS(100), 1,
      sym_url,
  [208] = 1,
    ACTIONS(102), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 75,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 150,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 164,
  [SMALL_STATE(18)] = 168,
  [SMALL_STATE(19)] = 172,
  [SMALL_STATE(20)] = 176,
  [SMALL_STATE(21)] = 180,
  [SMALL_STATE(22)] = 184,
  [SMALL_STATE(23)] = 188,
  [SMALL_STATE(24)] = 192,
  [SMALL_STATE(25)] = 196,
  [SMALL_STATE(26)] = 200,
  [SMALL_STATE(27)] = 204,
  [SMALL_STATE(28)] = 208,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_page_line, 4, .production_id = 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_page_line, 4, .production_id = 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_line, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_line, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next_page_line, 3, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next_page_line, 3, .production_id = 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_line, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_line, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_line, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_line, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_type, 1),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_directive, 2, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_command, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_selector, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pipet(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
