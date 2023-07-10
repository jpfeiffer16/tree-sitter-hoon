module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    // TODO: add the actual grammar rules
    document: $ => repeat($._value),
    _value: $ => $.token,
    token: $ => choice(
      $.barcen,
      $.luslus,
      $.bartis,
      $.any,
      $.integer_literal,
      $.tape_literal,
      $.cord_literal,
      $.cell
    ),
    barcen: $ => seq('|%', $.token, '--'),
    luslus: $ => seq('++', $.identifier, $.token),
    bartis: $ => seq('|=', $.token, $.token),
    cell: $ => seq('[', $.token, ']'),
    // type_structure: $ => seq(),
    // type: $ => seq(),
    // sample: $ => seq($.identifier, '=', $.type, $.token)
    identifier: _ => /[a-z]|[-]+/,
    integer_literal: _ => seq(/\d/, /.*/),
    tape_literal: _ => seq('"', /.*/, '"'),
    cord_literal: _ => seq('\'', /.*/, '\''),
    any: _ => seq(/\S/, /.*/),

    comment: _ => token(choice(
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
