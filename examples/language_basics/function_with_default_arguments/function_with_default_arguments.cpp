#include <iostream>

// function with default arguments
int add(int a = 4, int b = 1) {
  return a + b;
}

int main() {
  int result = add();
  std::cout << "result = " << result << std::endl;
  
  result = add(3);
  std::cout << "result = " << result << std::endl;
  
  result = add(3, 4);
  std::cout << "result = " << result << std::endl;
}
