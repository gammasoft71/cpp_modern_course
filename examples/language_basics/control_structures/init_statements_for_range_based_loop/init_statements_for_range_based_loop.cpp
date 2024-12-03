#include <iostream>
#include <array>

int main() {
  std::array data = {"hello", ",", "world"};
  for (std::size_t i = 0; auto& d : data)
    std::cout << i++ << ' ' << d << '\n';
}
