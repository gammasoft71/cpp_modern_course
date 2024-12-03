#include <iostream>

// function with params and return
int multiply(int a, int b) {
  return a * b;
}

int main() {
  int result = multiply(3, 4);
  std::cout << "3 * 4 = " << result << std::endl;
}
