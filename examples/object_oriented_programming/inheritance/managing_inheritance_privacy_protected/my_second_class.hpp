#pragma once
#include "my_first_class.hpp"

class my_second_class : protected my_first_class {
public:
  void func_second();
};
