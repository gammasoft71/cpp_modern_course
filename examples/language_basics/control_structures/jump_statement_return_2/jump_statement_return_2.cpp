#include <iostream>

bool is_odd(int value) {
  if (value % 2) return true;
  return false;
}

int main() {
  std::cout << "42 " << (is_odd(42) ? "is" : "is not") << " odd." << std::endl;
  std::cout << "21 " << (is_odd(21) ? "is" : "is not") << " odd." << std::endl;
}
