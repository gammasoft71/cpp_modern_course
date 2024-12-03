#include <iostream>

static int local_variable = 0;

int main() {
  local_variable = 42;
  
  std::cout << "Anomymous namespace static" << std::endl;
}
