#include <iostream>

using value = int;

value get_value() {return 42;}
bool condition(value val) {return val == 42;}

void f(value val) {std::cout << "(f) val = " << val << std::endl;}
void g(value val) {std::cout << "(g) val = " << val << std::endl;}
void h(value val) {std::cout << "(h) val = " << val << std::endl;}

int main() {
  if (value val = get_value(); condition(val)) {
    f(val); // ok
  } else
    g(val); // ok
  //h(val); // error, no 'val' in scope here
}
