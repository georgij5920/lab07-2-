#include "formatter_ex.h"
#include "print.hpp"
#include "solver.h"

#include <iostream>
#include <sstream>

int main() {
  double a = 0.0;
  double b = 0.0;
  double c = 0.0;
  std::cin >> a >> b >> c;
  const auto roots = solve(a, b, c);
  std::ostringstream out;
  out << roots.first << ' ' << roots.second;
  print(formatter_ex(out.str()));
  return 0;
}
