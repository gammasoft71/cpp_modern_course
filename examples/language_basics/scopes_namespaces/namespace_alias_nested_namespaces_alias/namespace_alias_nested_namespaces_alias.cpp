#include <iostream>

namespace a::b::c::d {
  int value = 0;
}

void f( ) {
  namespace l = a::b::c::d;
  l::value = 42;
}
    
int main() {
  f();
  
  std::cout << "Namespace alias: nested namespaces alias" << std::endl;
}
