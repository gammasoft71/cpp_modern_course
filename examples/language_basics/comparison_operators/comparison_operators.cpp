#include <iomanip>
#include <iostream>

int main() {
  bool a = (3 == 3);  // true
  bool b = (3 != 3);  // false
  bool c = (4 < 4);   // false
  bool d = (4 <= 4);  // true
  bool e = (4 > 4);   // false
  bool f = (4 >= 4);  // true
  auto g = (5 <=> 5); // std::strong_ordering::equivalent, Since C++20
  
  std::cout << std::boolalpha << "a = " << a << std::endl;
  std::cout << std::boolalpha << "b = " << b << std::endl;
  std::cout << std::boolalpha << "c = " << c << std::endl;
  std::cout << std::boolalpha << "d = " << d << std::endl;
  std::cout << std::boolalpha << "e = " << e << std::endl;
  std::cout << std::boolalpha << "f = " << f << std::endl;
  std::cout << std::boolalpha << "g = " << (g == std::strong_ordering::equivalent) << std::endl;
}
