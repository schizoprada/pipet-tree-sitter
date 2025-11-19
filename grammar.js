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
      field('selector', $.selector),
      optional($.pipe_command),
      '\n'
    ),

    next_page_line: $ => seq(
      optional($.indentation),
      '>',
      field('selector', $.selector),
      '\n'
    ),

    indentation: $ => /[ \t]+/,

    selector: $ => /[^|\n>]+/,

    pipe_command: $ => seq(
      '|',
      /[^\n]+/
    ),
  }
});
