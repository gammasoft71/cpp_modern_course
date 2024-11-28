#include <iostream>

int main() {
  enum class shape_type {circle, rectangle};
  struct rectangle {
    float width;
    float height;
  };
    
  struct shape {
    shape_type type;
    union {
      float radius;
      rectangle rect;
    } ;
  };
  
  shape circle1 {.type = shape_type::circle, .radius = 3.45};
  shape rectangle1 {.type = shape_type::rectangle, .rect = 13, 4};

std::cout << "More concrete example" << std::endl;
}
