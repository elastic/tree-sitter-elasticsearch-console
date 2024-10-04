// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterKibanaDevConsole",
    products: [
        .library(name: "TreeSitterKibanaDevConsole", targets: ["TreeSitterKibanaDevConsole"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterKibanaDevConsole",
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
            name: "TreeSitterKibanaDevConsoleTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterKibanaDevConsole",
            ],
            path: "bindings/swift/TreeSitterKibanaDevConsoleTests"
        )
    ],
    cLanguageStandard: .c11
)
