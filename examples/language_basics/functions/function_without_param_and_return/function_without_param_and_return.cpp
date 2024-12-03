#include <iostream>

// function without param and return
float get_pi() {
  return 3.14159;
}

int main() {
  float pi = get_pi();
  std::cout << "pi = " << pi << std::endl;
}
