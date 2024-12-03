#include <iostream>

unsigned int run_job() {
  // Step 1: data
  data d;
  d.resize(123456);
  d.fill(...);
  
  // Step 2: muons
  for (...) {
    if (...) {
      d.erase(...);
    }
  }
  
  // Step 3: electrons
  for (...) {
    if (...) {
      d.erase(...);
    }
  }
  
  // Step 4: dileptons
  int counter = 0;
  for (...) {
    if (...) {
      counter++;
    }
  }
  
  return counter;
}

int main() {
  std::cout << "Don’t! Everything in one long function" << std::endl;
}
