#pragma once

#include <string>

struct fast_to_copy {
  std::string name;
};

struct slow_to_copy {
  std::string name;

  // Functions to create and copy this struct.
  // We go into details on the next days.
  slow_to_copy();
  slow_to_copy(const std::string& name);
  slow_to_copy(const slow_to_copy& other);
};
