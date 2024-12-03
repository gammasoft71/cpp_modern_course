#include <iostream>

int main() {
  enum vehicle_type {
    BIKE, // 0
    CAR,  // 1
    BUS,  // 2
  };
  
  vehicle_type t = CAR;
  
  std::cout << "Enum" << std::endl;
}
