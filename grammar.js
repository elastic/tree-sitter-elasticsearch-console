/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * Copyright Elasticsearch B.V. and contributors
 * SPDX-License-Identifier: Apache-2.0
 */

module.exports = grammar({
  name: "elasticsearch_console",

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat(choice($.request, '\n')),

    comment: $ => seq("#", /[^\n]*/),

    request: $ => seq(
      $.request_line,
      '\n',
      optional(field('body', $.body)),
    ),

    request_line: $ => seq(
      field('method', $.method),
      /[^\S\n]+/,
      field('path', $.path)
    ),

    method: $ => choice(
      'GET',
      'HEAD',
      'DELETE',
      'POST',
      'PUT'
    ),

    path: $ => seq(
      $._pathname,
      optional($._querystring)
    ),

    _pathname: $ => choice(
      '/',
      seq(
        optional('/'),
        repeat(seq($._path_part, token.immediate('/'))),
        $._path_part,
        optional(token.immediate('/'))
      )
    ),

    _path_part: $ => /[^\s\/]+/,

    _querystring: $ => seq(
      token.immediate('?'),
      repeat(seq($._querystring_part, token.immediate('&'))),
      optional($._querystring_part)
    ),

    _querystring_part: $ => /[^&\?\s]+/,

    body: $ => repeat1(seq($._object, '\n')),

    _json_value: $ => choice(
      $._null,
      $._boolean,
      $._number,
      $._string,
      $._array,
      $._object
    ),

    _null: $ => "null",

    _boolean: $ => choice("true", "false"),

    _number: $ => /\-?\d+(\.\d+)?((e|E)\-?\d+)?/,

    _string_single: $ => seq('"', /[^"\n]*/, '"'),
    _string_triple: $ => seq('"""', /[^"]*/, '"""'),
    _string: $ => choice($._string_single, $._string_triple),

    _array: $ => choice(
      seq('[', ']'),
      seq(
        '[',
        repeat(seq($._json_value, ',')),
        $._json_value,
        ']'
      ),
    ),

    _object_key_val: $ => seq($._string_single, ":", $._json_value),

    _object: $ => choice(
      seq("{", "}"),
      seq(
        "{",
        repeat(seq($._object_key_val, ",")),
        $._object_key_val,
        "}"
      )
    )
  }
});
