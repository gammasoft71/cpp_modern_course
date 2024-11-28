#include <iostream>

int main() {
  int a = 1;
  {
    int b[4];
    b [0] = a;
  }
  // Doesn't compile here:
  // b[1] = a + 1;

  std::cout << "Scope and lifetime of variables" << std::endl;
}
