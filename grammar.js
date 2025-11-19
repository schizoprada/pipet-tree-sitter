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
      $.directive,
      '\n',
      repeat(
        choice(
          $.query,
          $.nextpage
        )
      )
    ),

    directive: $ => seq(
      field('type', $.typeof),
      field('url', $.url)
    ),

    typeof: $ => choice(
      'curl',
      'playwright'
    ),

    url: $ => /[^\s\n]+/,

    query: $ => seq(
      optional($.indentation),
      choice(
        $.cssquery,
        $.jsonquery,
        $.jsquery
      ),
      optional($.pipe),
      '\n'
    ),

    nextpage: $ => seq(
      optional($.indentation),
      '>',
      field('selector', $.cssx),
      '\n'
    ),

    indentation: $ => /[ \t]+/,

    // CSS selector - has ., #, >, or common HTML tags
    cssquery: $ => /[a-zA-Z#.\[\]:*\-][^|\n]*/,

    // JSON query - GJSON syntax with # or @
    jsonquery: $ => /[a-zA-Z_][^|\n]*[#@][^|\n]*/,

    // JavaScript query - for playwright blocks
    jsquery: $ => /[a-zA-Z_$][^|\n]*/,

    cssx: $ => /[^\n]+/,

    pipe: $ => seq(
      '|',
      /[^\n]+/
    ),
  }
});
