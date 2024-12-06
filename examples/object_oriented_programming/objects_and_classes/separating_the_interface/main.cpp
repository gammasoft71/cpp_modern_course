#include "my_class.hpp"
#include <iostream>

int main() {
  my_class mc {.a = 2};
  mc.square_a();
  
  std::cout << "mc.a = " << mc.a << std::endl;
}
