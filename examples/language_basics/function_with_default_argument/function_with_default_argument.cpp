#include <iostream>

// function with default argument
int add(int a, int b = 1) {
  return a + b;
}

int main() {
  int result = add(3);
  std::cout << "result = " << result << std::endl;
  
  result = add(3, 4);
  std::cout << "result = " << result << std::endl;
}
