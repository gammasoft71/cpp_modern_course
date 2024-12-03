#include <iostream>

int value = 0;
namespace n {
  int value = 0;
  namespace p {
    int value = 0;
    namespace inner {
      int value = 0;
    }
  }
}

void f() {
  ::value = 42;
  n::value = 84;
  n::p::inner:: value = 21;
}

int main() {
  f();
  
  std::cout << "Main function" << std::endl;
}
