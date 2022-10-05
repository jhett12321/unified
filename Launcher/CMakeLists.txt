add_library(Bootstrap SHARED bootstrap.cpp)
target_link_libraries(Bootstrap PRIVATE detours)
target_link_libraries(Bootstrap PRIVATE NWNXLib)

target_compile_definitions(Bootstrap PRIVATE "-DPLUGIN_NAME=\"Bootstrap\"")

set_target_properties(Bootstrap PROPERTIES LINK_FLAGS /EXPORT:DetourFinishHelperProcess,@1,NONAME)
set_target_properties(Bootstrap PROPERTIES PREFIX "${PLUGIN_PREFIX}")

add_executable(Launcher WIN32 main.cpp)
target_link_libraries(Launcher PRIVATE detours)
target_link_libraries(Launcher PRIVATE Bootstrap)

set_target_properties(Launcher PROPERTIES PREFIX "${PLUGIN_PREFIX}")
