#include <iostream>

int main() {
  bool is_lepton = true;
  
  const int charge = is_lepton ? -1 : 0;
  
  std::cout << "charge = " << charge << std::endl;
}
