#include <iostream>

namespace a::b::c {
  int value = 0;
}

void f() {
  using namespace a::b;
  c::value = 42;
}

int main() {
  f();
  
  std::cout << "Using namepsace directive with partial nested namepsaces" << std::endl;
}
