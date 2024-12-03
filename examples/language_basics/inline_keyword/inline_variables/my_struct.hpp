#pragma once
#include <string>

inline int count_item = 0;
inline const std::string file_name = "output.txt";

struct my_struct {
  inline static int count_item = 0;
  inline static const std::string file_name = "input.txt";
  
  int value_a;
  int value_b;
};
