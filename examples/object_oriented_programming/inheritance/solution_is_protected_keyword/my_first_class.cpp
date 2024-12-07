#include "my_first_class.hpp"

int my_first_class::get_a() {
  return a;
}

void my_first_class::set_a(int value) {
  a = value;
}

void my_first_class::square_a() {
  a *= a;
}
