#pragma once
#include "my_first_class.hpp"

class my_second_class : private my_first_class {
public:
  void func_second();
};
