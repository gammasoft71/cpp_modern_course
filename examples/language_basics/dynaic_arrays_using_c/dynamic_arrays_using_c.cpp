#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
  int* bad;          // pointer to random address
  int* ai = nullptr; // better, deterministic, testable
  
  // allocate array of 10 ints (uninitialized)
  ai = (int*)std::malloc(10 * sizeof(int));
  std::memset(ai, 0, 10 * sizeof(int)); // and set them to 0
  
  ai = (int*) std::calloc(10, sizeof(int)); // both in one go
  
  std::free(ai); // release memory
  
  std::cout << "Dynamic arrays using C" << std::endl;
}
