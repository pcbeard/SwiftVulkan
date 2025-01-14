// swift-tools-version:5.0

import PackageDescription

let package = Package(
    name: "Vulkan",
    products: [
        .library(name: "Vulkan", targets: ["Vulkan"])
    ],
    targets: [
        .systemLibrary(name: "Vulkan",
                       pkgConfig: "vulkan",
                       providers: [
                        .brew(["vulkan-sdk"]), // <cask> apenngrace/vulkan/vulkan-sdk
                        .apt(["libvulkan-dev", "libvulkan1", "vulkan-utils"]) // https://packages.ubuntu.com/source/vulkan
        ]),
        .testTarget(name: "VulkanTests",
                    dependencies: ["Vulkan"])
    ]
)
