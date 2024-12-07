#include "my_class.hpp"
#include <iostream>

int main() {
  auto mc = my_class {.a = 2};
  mc.square_a();
  
  std::cout << "mc.a = " << mc.a << std::endl;
}
