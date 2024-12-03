#include <iostream>

int sum(int b);             // 1
int sum(int b, int c);      // 2, ok, overload
// float sum(int b, int c); // disallowed

sum(42);     // calls 1
sum(42, 43); // calls 2

int sum(int b, int c, int d = 4); // 3, overload

sum(42, 43, 44); // calls 3
sum(42, 43);     // error: ambiguous, 2 or 3

int main() {
  std::cout << "Overoading" << std::endl;
}
