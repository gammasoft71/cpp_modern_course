#include <cassert>
#include <iostream>

double f(double a) {
  // [...] do stuff with a
  // [...] that should leave it positive
  assert(a > .0);
  return std::sqrt(a);
}

int main() {
  std::cout << "result = " << f(9) << std::endl;
  std::cout << "result = " << f(-9) << std::endl;
}
