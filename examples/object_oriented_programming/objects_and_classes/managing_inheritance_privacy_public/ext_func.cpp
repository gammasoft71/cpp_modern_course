#include "ext_func.hpp"

void ext_func(my_third_class t) {
  int a = t.pub;  // ok
  // int b = t.prot; // error
  // int c = t.priv; // error
}
