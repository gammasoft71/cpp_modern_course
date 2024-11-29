#include <iostream>

int main() {
  int i = 1 + 4 - 2; // 3
  i *= 3;            // short for: i = i * 3;
  i /= 2;            // 4
  i = 23 % i;        // modulo => 3

  std::cout << "i = " << i << std::endl;
}
