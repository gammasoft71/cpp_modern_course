#include <iostream>
#include <type_traits>

//using user_type_t = double;
using user_type_t = int;

double f(user_type_t a) {
  static_assert(std::is_floating_point<user_type_t>::value, "This function expects floating-point types.");
  return std::sqrt(a);
}

int main() {
  std::cout << "result = " << f(9) << std::endl;
}
