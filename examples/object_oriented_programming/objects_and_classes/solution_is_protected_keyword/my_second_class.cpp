#include "my_second_class.hpp"

int my_second_class::get_b() {
  return b;
}

void my_second_class::set_b(int value) {
  b = value;
}

int my_second_class::sum() {
  return a + b;
}
