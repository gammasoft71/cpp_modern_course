#include "vector.hpp"
#include <algorithm>

vector::vector(int n) : len {n} {
  data = new int[len];
}

vector::vector(const vector& other) : len {other.len} {
  data = new int[len];
  std::copy(other.data, other.data + len, data);
}

vector::~vector() {
  delete[] data;
}
