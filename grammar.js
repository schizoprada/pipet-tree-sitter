module.exports = grammar({
  name: 'pipet',

  extras: $ => [
    ' ',
    '\t',
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.comment,
        $.block,
        '\n'
      )
    ),

    comment: $ => token(seq('//', /.*/)),

    block: $ => seq(
      $.resource_directive,
      '\n',
      repeat(
        choice(
          $.query_line,
          $.next_page_line
        )
      )
    ),

    resource_directive: $ => seq(
      field('type', $.resource_type),
      field('url', $.url)
    ),

    resource_type: $ => choice(
      'curl',
      'playwright'
    ),

    url: $ => /[^\s\n]+/,

    query_line: $ => seq(
      optional($.indentation),
      choice(
        $.css_selector_query,
        $.json_query,
        $.js_query
      ),
      optional($.pipe_command),
      '\n'
    ),

    next_page_line: $ => seq(
      optional($.indentation),
      '>',
      field('selector', $.css_selector),
      '\n'
    ),

    indentation: $ => /[ \t]+/,

    css_selector_query: $ => /[a-zA-Z#.\[\]:*\-][^|\n]*/,

    json_query: $ => /[a-zA-Z_][^|\n]*[#@][^|\n]*/,

    js_query: $ => /[a-zA-Z_$][^|\n]*/,

    css_selector: $ => /[^\n]+/,

    pipe_command: $ => seq(
      '|',
      /[^\n]+/
    ),
  }
});
