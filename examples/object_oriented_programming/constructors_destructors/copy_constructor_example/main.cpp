#include "print.hpp"
#include "vector.hpp"

int main() {
  auto v1 = vector {5};

  for (auto index = 0; index < v1.len; ++index)
    v1.data[index] = 10 * index;

  auto v2 = vector {v1};
  auto v3 = v2;

  print("v1", v1);
  print("v2", v2);
  print("v3", v3);
}
