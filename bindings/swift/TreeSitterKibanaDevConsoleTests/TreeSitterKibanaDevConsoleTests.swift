import XCTest
import SwiftTreeSitter
import TreeSitterKibanaDevConsole

final class TreeSitterKibanaDevConsoleTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_kibana_dev_console())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading KibanaDevConsole grammar")
    }
}
