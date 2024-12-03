#include <iomanip>
#include <iostream>

int main() {
  bool a = true;
  bool b = false;
  bool c = a && b; // false
  bool d = a || b; // true
  bool e = !d;     // false
  
  std::cout << std::boolalpha << "a = " << a << std::endl;
  std::cout << std::boolalpha << "b = " << b << std::endl;
  std::cout << std::boolalpha << "c = " << c << std::endl;
  std::cout << std::boolalpha << "d = " << d << std::endl;
  std::cout << std::boolalpha << "e = " << e << std::endl;
}
