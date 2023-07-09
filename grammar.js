module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    // TODO: add the actual grammar rules
    document: $ => repeat($._value),
    _value: $ => $.token,
    token: $ => choice(
      $.barcen,
      $.luslus,
      $.any
    ),
    barcen: $ => seq('|%', $.token, '--'),
    luslus: $ => seq('++', $.identifier, $.token),
    identifier: $ => /[a-z]+/,
    any: $ => seq(/\S/, /.*/),

    comment: $ => token(choice(
      seq('::', /.*/),
      // seq(
      //   '/*',
      //   /[^*]*\*+([^/*][^*]*\*+)*/,
      //   '/'
      // )
    )),
  },
  extras: $ => [
    /\s/,
    $.comment,
  ]
});
