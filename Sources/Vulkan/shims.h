#ifndef Vulkan_shims_h
#define Vulkan_shims_h

#ifdef __APPLE__
    #include <vulkan/vulkan.h>
    #include <vulkan/vk_platform.h>
    //#include <MoltenVK/mvk_vulkan.h>
    //#include <MoltenVK/mvk_datatypes.h>
    //#include <MoltenVK/vk_mvk_moltenvk.h>
#else
   #include <vulkan/vulkan.h>
   #include <vulkan/vk_platform.h>
   //#include <vulkan/vk_icd.h>
   //#include <vulkan/vk_layer.h>
   //#include <vulkan/vk_layer_dispatch_table.h>
   //#include <vulkan/vk_sdk_platform.h>
   //#include <vulkan/vulkan_android.h>
   //#include <vulkan/vulkan_core.h>
   //#include <vulkan/vulkan_intel.h>
   //#include <vulkan/vulkan_ios.h>
   //#include <vulkan/vulkan_macos.h>
   //#include <vulkan/vulkan_mir.h>
   //#include <vulkan/vulkan_vi.h>
   //#include <vulkan/vulkan_wayland.h>
   //#include <vulkan/vulkan_win32.h>
   //#include <vulkan/vulkan_xcb.h>
   //#include <vulkan/vulkan_xlib.h>
   //#include <vulkan/vulkan_xlib_xrandr.h>
#endif


#endif


