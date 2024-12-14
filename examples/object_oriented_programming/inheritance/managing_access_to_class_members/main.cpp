#include "my_first_class.hpp"
#include <iostream>

int main() {
  auto obj = my_first_class {};
  // obj.a = 5; // error !
  obj.set_a(5); // ok
  obj.square_a();
  auto r = obj.get_a();
  
  std::cout << "r = " << r << std::endl;
}
