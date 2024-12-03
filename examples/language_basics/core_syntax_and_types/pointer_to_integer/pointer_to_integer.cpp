#include <iostream>
#include <cstdint>

int valuel = 42;
int value2 = 84;

// can hold any diff between two pointers
std::ptrdiff_t ptrdiff = &value2 - &valuel;

// can hold any pointer value
std::intptr_t intptr = reinterpret_cast<intptr_t>(&valuel);
std::uintptr_t uintptr = reinterpret_cast<uintptr_t>(&value2);

int main() {
  std::cout << "Main function" << std::endl;
}
