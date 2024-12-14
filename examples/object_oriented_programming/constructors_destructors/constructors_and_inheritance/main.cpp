#include "second.hpp"
#include <iostream>

int main() {
  auto s1 = second {};
  auto s2 = second {20};
  auto s3 = second {10, 20};
  
  std::cout << "s1.a = " << s1.a << ", s1.b = " << s1.b << std::endl;
  std::cout << "s2.a = " << s2.a << ", s2.b = " << s2.b << std::endl;
  std::cout << "s3.a = " << s3.a << ", s3.b = " << s3.b << std::endl;
}
