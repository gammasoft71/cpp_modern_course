#include "my_second_class.hpp"
#include <iostream>

int main() {
  auto obj = my_second_class {};
  obj.set_a(5);
  obj.square_a();
  obj.set_b(10);
  int r = obj.sum(); // r = 35
  
  std::cout << "r = " << r << std::endl;
}
