#include <iostream>

namespace a {
  int value = 0;
}

void f() {
  a::value = 42;
}

int main() {
  f();
  
  std::cout << "Using namespace directive" << std::endl;
}
