#include "my_first_class.hpp"
#include <iostream>

int main() {
  my_first_class my_obj;
  my_obj.a = 2;
  
  // let's square a
  my_obj.square_a();
  
  std::cout << "my_obj.a = " << my_obj.a << std::endl;
}
