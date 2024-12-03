#include <iostream>

int collatz(int a) {
  if (a <= 0) {
    std:: cout << "not supported\n";
    return 0;
  } else if (a == 1) {
    return 1;
  } else if (a % 2 == 0) {
    return collatz(a / 2);
  } else {
    return collatz (3 * a + 1);
  }
}

int main() {
  std::cout << "result = " << collatz(42) << std::endl;
}
