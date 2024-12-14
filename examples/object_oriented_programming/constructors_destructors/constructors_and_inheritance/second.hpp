#pragma once
#include "first.hpp"

struct second : first {
  second();
  second(int b);
  second(int a, int b);
  
  int b;
};
