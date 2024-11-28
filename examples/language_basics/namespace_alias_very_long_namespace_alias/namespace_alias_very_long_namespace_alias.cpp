#include <iostream>

namespace very_long_namespace {
  int value = 0;
}

void f() {
  namespace vln = very_long_namespace;
  vln::value = 42;
}

int main() {
  f();
  
  std::cout << "Namespace alias; very long namespace alias" << std::endl;
}
