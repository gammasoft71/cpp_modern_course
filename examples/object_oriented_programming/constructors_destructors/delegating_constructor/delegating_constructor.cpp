#include <iostream>

struct delegate {
  delegate() : delegate {42} {}
  
  delegate(int value) : i {value} {
    /// ... complex initialization ...
  }
  
  int i;
};

int main() {
  std::cout << "Delegating constructor" << std::endl;
}
