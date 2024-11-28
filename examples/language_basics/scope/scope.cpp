#include <iostream>

int main() {
  {
    int a = 0;
    {
      int b = 0;
    } // end of b scope
  } // end of a scope

  std::cout << "Scope" << std::endl;
}
