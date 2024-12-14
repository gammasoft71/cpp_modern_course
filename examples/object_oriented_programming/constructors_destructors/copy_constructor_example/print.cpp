#include "print.hpp"
#include <iostream>

void print(const std::string& name, const vector& v) {
  for (auto index = 0; index < v.len; ++index)
    std::cout << (index ? ", " : name + " = {") << v.data[index] << (index == v.len - 1 ? "}\n" : "");
}

// Same method as 'print', but more expressive.
/*
void print(const std::string& name, const vector& v) {
  std::cout << name << " = {";
  for (auto index = 0; index < v.len; ++index) {
    if (index) std::cout << ", ";
    std::cout << v.data[index];
  }
  std::cout << "}" << std::endl;
}
 */
