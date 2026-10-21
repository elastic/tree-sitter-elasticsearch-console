/*
 * Copyright Elasticsearch B.V. and contributors
 * SPDX-License-Identifier: Apache-2.0
 */

package tree_sitter_elasticsearch_console_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_elasticsearch_console "github.com/elastic/tree-sitter-elasticsearch_console/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_elasticsearch_console.Language())
	if language == nil {
		t.Errorf("Error loading ElasticsearchConsole grammar")
	}
}
