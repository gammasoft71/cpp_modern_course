#include <iostream>

namespace a::b::c::d {
  int value = 0;
}

void f( ) {
  a::b::c::d::value = 42;
}
    
int main() {
  f();
  
  std::cout << "Namespace alias: nested namespaces" << std::endl;
}
