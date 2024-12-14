#pragma once

struct first {
  first() {} // leaves a uninitialized
  first(int a) : a {a} {}
  
  int a;
};
