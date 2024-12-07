#pragma once
#include "my_first_class.hpp"

class my_second_class : public my_first_class {
public:
  int get_b();
  void set_b(int value);

  int sum();
  
private:
  int b;
};
