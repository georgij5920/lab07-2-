add_executable(hello_world main.cpp)
target_link_libraries(hello_world PRIVATE formatter_ex::formatter_ex print::print)
target_compile_features(hello_world PRIVATE cxx_std_14)
install(TARGETS hello_world RUNTIME DESTINATION bin)
