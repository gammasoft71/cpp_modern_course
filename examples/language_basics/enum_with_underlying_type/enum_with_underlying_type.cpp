#include <iostream>

int main() {
  enum vehicle_type : int { // Since C++11
    BIKE = 3,
    CAR = 5,
    BUS = 7,
  };
  
  vehicle_type t = BUS;
  
  std::cout << "Enum with underlying type" << std::endl;
}
