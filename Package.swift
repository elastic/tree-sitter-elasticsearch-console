// swift-tools-version:5.3
/*
 * Copyright Elasticsearch B.V. and contributors
 * SPDX-License-Identifier: Apache-2.0
 */
import PackageDescription

let package = Package(
    name: "TreeSitterElasticsearchConsole",
    products: [
        .library(name: "TreeSitterElasticsearchConsole", targets: ["TreeSitterElasticsearchConsole"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterElasticsearchConsole",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterElasticsearchConsoleTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterElasticsearchConsole",
            ],
            path: "bindings/swift/TreeSitterElasticsearchConsoleTests"
        )
    ],
    cLanguageStandard: .c11
)
