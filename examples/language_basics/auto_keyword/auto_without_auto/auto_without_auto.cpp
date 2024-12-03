#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = std::vector<int> {42, 84, 21, 65};
  float a = v[3];  // conversion intended?
  int b = v.size(); // bug? unsigned to signed

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
}
