#include <iostream>

int main() {
  enum class vehicle_type : int {
    bike = 3,
    car = 5,
    bus = 7,
  };
  
  vehicle_type t = vehicle_type::bus;
  
  std::cout << "Enum class with underlying type" << std::endl;
}
