#include "solver.h"

#include <cmath>
#include <stdexcept>

std::pair<double, double> solve(double a, double b, double c) {
  if (a == 0.0) {
    throw std::invalid_argument("a must not be zero");
  }
  const double d = b * b - 4.0 * a * c;
  if (d < 0.0) {
    throw std::runtime_error("negative discriminant");
  }
  const double root = std::sqrt(d);
  return {(-b - root) / (2.0 * a), (-b + root) / (2.0 * a)};
}
