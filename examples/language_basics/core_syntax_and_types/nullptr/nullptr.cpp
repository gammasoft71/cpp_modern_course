#include <iostream>

int main() {
  int* ip = nullptr;
  int i1 = NULL;    // compiles but bug
  int i2 = nullptr; // ERROR
  
  std::cout << "nullptr" << std::endl;
}
