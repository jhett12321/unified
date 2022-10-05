add_executable(Launcher WIN32 main.cpp)
target_link_libraries(Launcher PRIVATE detours)
target_link_libraries(Launcher PRIVATE Core)
