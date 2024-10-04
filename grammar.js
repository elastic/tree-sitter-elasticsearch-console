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

    request_body: $ => /\{[^\}]*\}/,

    request: $ => seq(
      $.request_type,
      $.request_path,
      optional($.request_body)
    ),
  }
});
