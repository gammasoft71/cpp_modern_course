#include <iostream>

int main() {
  int i = 2;
  int& iref = i; // access to i
  iref = 3;      // i is now 3
  
  // const reference to a member:
  struct a_struct {int x; int y;} a;
  const int& x = a.x; // direct read access to a_struct's x
  x = 4;              // doesn't compile
  a. x = 4;           // fine
  
  std::cout << "references" << std::endl;
}
