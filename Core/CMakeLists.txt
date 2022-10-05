# NWNX_Core Build Script
# ------------------------------------------------------

add_library(Core SHARED ${ENTRYPOINT} NWNXCore.cpp NWNXCoreVM.cpp)
if(MSVC)
    target_link_libraries(Core PRIVATE detours)
    set_target_properties(Core PROPERTIES LINK_FLAGS /EXPORT:DetourFinishHelperProcess,@1,NONAME)
endif()

add_sanitizers(Core)
set_target_properties(Core PROPERTIES PREFIX "${PLUGIN_PREFIX}")
target_compile_definitions(Core PRIVATE "-DPLUGIN_NAME=\"${PLUGIN_PREFIX}Core\"")
target_link_libraries(Core PUBLIC NWNXLib)

# The name defined here will be ignored when loading plugins.
add_definitions(-DNWNX_CORE_PLUGIN_NAME="${PLUGIN_PREFIX}Core")
