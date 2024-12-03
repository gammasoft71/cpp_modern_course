#include <iostream>
#include <cstddef>

int value = 42;

std::size_t size_1 = sizeof(value); // 4
std::size_t size_2 = sizeof(int);   // 4
std::size_t size_3 = sizeof(42);    // 4

int main() {
  std::cout << "Sizeof" << std::endl;
}
