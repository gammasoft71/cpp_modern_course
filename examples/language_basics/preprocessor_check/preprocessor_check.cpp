#include <cstdint>
#include <iostream>

// compile time or platform specific configuration check
#if defined(USE64BITS) || defined (__GNUG__)
  using my_int = std::uint64_t;
#elif
  using my_int = std::uint32_t;
#endif

int main() {
  std::cout << "sizeof(my_int) = " << sizeof(my_int) << std::endl;
}
