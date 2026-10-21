/*
 * Copyright Elasticsearch B.V. and contributors
 * SPDX-License-Identifier: Apache-2.0
 */

import XCTest
import SwiftTreeSitter
import TreeSitterElasticsearchConsole

final class TreeSitterElasticsearchConsoleTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_elasticsearch_console())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading ElasticsearchConsole grammar")
    }
}
