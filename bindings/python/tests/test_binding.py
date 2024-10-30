from unittest import TestCase

import tree_sitter, tree_sitter_elasticsearch_console


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_elasticsearch_console.language())
        except Exception:
            self.fail("Error loading ElasticsearchConsole grammar")
