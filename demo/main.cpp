#include "formatter_ex.h"

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  const char* log_path = std::getenv("LOG_PATH");
  if (log_path == nullptr) {
    std::cerr << "LOG_PATH is not set" << std::endl;
    return 1;
  }

  std::ofstream log(log_path);
  if (!log) {
    std::cerr << "cannot open log file" << std::endl;
    return 1;
  }

  std::string word;
  while (std::cin >> word) {
    log << formatter_ex(word) << std::endl;
  }
  return 0;
}
