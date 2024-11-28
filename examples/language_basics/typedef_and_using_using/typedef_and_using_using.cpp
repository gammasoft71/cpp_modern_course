#include <iostream>
#include <cstdint>
#include <vector>

using myint = std::uint64_t;
myint count = 17;
using position = float[3];

template<typename type_t>
using myvec = std::vector<type_t>;
myvec<int> myintvec;

int main() {
  std::cout << "using" << std::endl;
}
