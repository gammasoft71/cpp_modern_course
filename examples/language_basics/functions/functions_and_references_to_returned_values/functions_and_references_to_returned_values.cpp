#include <iostream>

int square(int value) {
  return value * value;
}

int main() {
  int result = square(3);
  std::cout << "3^2 = " << result << std::endl;
  
  // Not allowed
  //int& result_ref = square(3);
  //std::cout << "3^2 = " << result_ref << std::endl;

  // Ok
  const int& result_const_ref = square(3); // Ok
  std::cout << "3^2 = " << result_const_ref << std::endl;
}
