add_library(print INTERFACE)
add_library(print::print ALIAS print)
target_include_directories(print INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
install(FILES print.hpp DESTINATION include)
