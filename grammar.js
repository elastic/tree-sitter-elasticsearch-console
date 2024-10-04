/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "kibana_dev_console",

  rules: {
    source_file: $ => repeat($.request),

    request_type: $ => choice(
      'GET',
      'HEAD',
      'DELETE',
      'POST',
      'PUT'
    ),

    request_path: $ => /\/?([\w\-\*\.]+\/?)+(\?[^\&\?\s]*(\&[^\&\?\s]*)*)?/,

    request_body: $ => $._json_object,

    request: $ => seq(
      $.request_type,
      $.request_path,
      optional($.request_body)
    ),

    _json_value: $ => choice(
      $._json_null,
      $._json_boolean,
      $._json_number,
      $._json_string,
      $._json_array,
      $._json_object
    ),

    _json_null: $ => "null",

    _json_boolean: $ => choice(
      "true",
      "false"
    ),

    _json_number: $ => /\-?\d+(\.\d+)?((e|E)\-?\d+)?/,

    _json_string: $ => choice(
      seq(
        '"',
        /[^"]*/,
        '"',
      ),
      seq(
        '"""',
        /[^"]*/,
        '"""',
      )
    ),

    _json_array: $ => choice(
      seq('[', ']'),
      seq(
        '[',
        $._json_value,
        ']'
      ),
      seq(
        '[',
        repeat(seq($._json_value, ",")),
        $._json_value,
        ']'
      )
    ),

    _json_object_def: $ => seq(
      seq('"', /[^"]+/, '"'),
      ":",
      $._json_value,
    ),

    _json_object: $ => choice(
      seq("{", "}"),
      seq(
        "{",
        $._json_object_def,
        "}"
      ),
      seq(
        "{",
        repeat(seq($._json_object_def, ",")),
        $._json_object_def,
        "}"
      )
    )
  }
});
