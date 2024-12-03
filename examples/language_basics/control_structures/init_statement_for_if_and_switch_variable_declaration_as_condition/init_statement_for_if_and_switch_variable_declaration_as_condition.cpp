#include <iostream>

using value = int;

value* get_value_ptr() {return new int(42);}
bool condition(value val) {return val == 42;}

void f(value val) {std::cout << "(f) val = " << val << std::endl;}

int main() {
  if (value* val = get_value_ptr())
    f(*val);
}
