#include <iostream>

int main() {
  // allocate array of ints
  int* ai1 = new int[10];            // 10 ints, uninitialized
  int* ai2 = new int[10] {};         // 10 ints, zero-initialized, since C++11
  int* ai3 = new int[] {42, 21, 84}; // 3 ints, initialized, since C++11
  
  // release arrays memory
  delete[] ai1; delete[] ai2; delete[] ai3;
  
  // allocate a single int
  int* pi1 = new int;
  int* pi2 = new int();    // zero-initialized
  int* pi3 = new int {};   // zero-initialized, since C++11
  int* pi4 = new int(42);  // initialized
  int* pi5 = new int {42}; // initialized, since C++11
  
  // release scalar memory
  delete pi1; delete pi2; delete pi3; delete pi4; delete pi5;
  
  std::cout << "Dynamic arrays using C++" << std::endl;
}

