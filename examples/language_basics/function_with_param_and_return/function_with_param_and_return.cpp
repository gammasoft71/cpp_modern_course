#include <iostream>

// function with param and return
int square(int value) {
  return value * value;
}

int main() {
  int result = square(3);
  std::cout << "3^2 = " << result << std::endl;
}
