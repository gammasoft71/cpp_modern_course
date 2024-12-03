#include <iostream>

inline int mult(int a, int b) {
  return a * b;
}

int main() {
  std::cout << "mult(4, 3) = " << mult(4, 3) << std::endl;
}
