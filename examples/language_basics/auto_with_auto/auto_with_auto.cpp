#include <iostream>
#include <vector>

int main() {
  auto v = std::vector<int> {42, 84, 21, 65};
  auto a = v[3];
  auto b = v.size();

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
}
