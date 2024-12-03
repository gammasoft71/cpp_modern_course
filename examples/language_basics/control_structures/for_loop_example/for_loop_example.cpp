#include <iostream>

int main() {
  for (int i = 0, j = 0; i < 10; i++, j = i * i)
    std::cout << i << "^2 is " << j << std::endl;
}
