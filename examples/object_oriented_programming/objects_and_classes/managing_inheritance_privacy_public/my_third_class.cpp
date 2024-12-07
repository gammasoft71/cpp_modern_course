#include "my_third_class.hpp"

void my_third_class::func_third() {
  int a = pub;  // ok
  int b = prot; // ok
  //int c = priv; // error
}
