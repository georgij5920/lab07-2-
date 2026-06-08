add_executable(demo main.cpp)
target_link_libraries(demo PRIVATE formatter_ex::formatter_ex)
target_compile_features(demo PRIVATE cxx_std_14)
install(TARGETS demo RUNTIME DESTINATION bin)
