#include <iostream>

void f() {
  std::cout << "f function" << std::endl;
}

void g() {
  std::cout << "g function" << std::endl;
}

void h() {
  std::cout << "h function" << std::endl;
}

int main() {
  char c = 'a';
  
  switch (c) {
    case 'a':
      f();    // Warning emitted
    case 'b': // Warning probably suppressed
    case 'c':
      g();
      [[fallthrough]]; // Warning suppressed
    case 'd':
      h();
  }
}
