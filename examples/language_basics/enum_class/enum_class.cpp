#include <iostream>

int main() {
  enum class vehicle_type {
    bike, // 0
    car,  // 1
    bus,  // 2
  };
  
  vehicle_type t = vehicle_type::car;
  
  std::cout << "Enum class" << std::endl;
}
