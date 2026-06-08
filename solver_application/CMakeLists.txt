add_executable(solver_app main.cpp)
target_link_libraries(solver_app PRIVATE solver::solver formatter_ex::formatter_ex print::print)
target_compile_features(solver_app PRIVATE cxx_std_14)
install(TARGETS solver_app RUNTIME DESTINATION bin)
