#include <iostream>

int collatz(int a) {
  return a == 1 ? 1 : collatz(a % 2 == 0 ? a / 2 : 3 * a + 1);
}

int main() {
  int result = collatz(42);
  std::cout << "result = " << result << std::endl;
}
