#include "vector.hpp"
#include <iostream>

int main() {
  auto v = vector {5};
  v.set_n(0, 10);
  v.set_n(1, 20);
  v.set_n(2, 30);
  v.set_n(3, 40);
  v.set_n(4, 50);
  v.set_n(5, 60);

  auto result = v.get_n(3);
  
  std::cout << "result = " << result << std::endl;
}
