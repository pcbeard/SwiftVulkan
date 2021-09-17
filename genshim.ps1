$root = $env:VULKAN_SDK
$includedir = ("$root/Include/vulkan").Trim()
if (!(Test-Path -Path ./Sources/Vulkan/vulkan)) {
    Copy-Item -Recurse $includedir ./Sources/Vulkan
}
Write-Output ('#include "vulkan/vulkan.h"') > Sources/Vulkan/windows_generated.h
Write-Output ('#include "vulkan/vk_platform.h"') >> Sources/Vulkan/windows_generated.h
