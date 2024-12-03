#include <iostream>

namespace a {
  int value = 0;
}

void f() {
  using namespace a;
  value = 42;
}

int main() {
  f();
  
  std::cout << "Using namespace directive with namespace" << std::endl;
}
