#include <iostream>

namespace very_long_namespace {
  int value = 0;
}

void f() {
  very_long_namespace::value = 42;
}

int main() {
  f();
  
  std::cout << "Namespace alias; very long namespace" << std::endl;
}
