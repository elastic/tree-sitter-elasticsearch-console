/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/*
 * Licensed to Elasticsearch B.V. under one or more contributor
 * license agreements. See the NOTICE file distributed with
 * this work for additional information regarding copyright
 * ownership. Elasticsearch B.V. licenses this file to you under
 * the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

// TODO: support for # and // comments
module.exports = grammar({
  name: "elasticsearch_console",

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
