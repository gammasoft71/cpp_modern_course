#include <iostream>

int main() {
  if (auto i = 54)
    std::cout << "i == 54" << std::endl;
  else
    std::cout << "i != 54" << std::endl;

  std::cout << "Hello, World!" << std::endl;
}
