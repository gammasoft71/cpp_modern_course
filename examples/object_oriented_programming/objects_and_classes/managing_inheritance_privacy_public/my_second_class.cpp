#include "my_second_class.hpp"

void my_second_class::func_second() {
  int a = pub;  // ok
  int b = prot; // ok
  //int c = priv; // error
}
