#include <iostream>

int main() {
  int v[] = {1, 2, 3, 4};
  int sum = 0;
  for (int a : v)
    sum += a;

  std::cout << "sum = " << sum << std::endl;
}
