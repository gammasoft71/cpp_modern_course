#include <iostream>

int main() {
  struct individual {
    unsigned char age;
    float weight;
  };
  
  individual student;
  student.age = 25;
  student.weight = 78.5f;
  
  individual teacher = {45, 67.0f};
  
  individual director = {.weight = 80.8f, .age = 60};
  
  individual* ptr = &student;
  ptr->age = 24; // same as: (*ptr).age = 24;

std::cout << "Struct" << std::endl;
}
