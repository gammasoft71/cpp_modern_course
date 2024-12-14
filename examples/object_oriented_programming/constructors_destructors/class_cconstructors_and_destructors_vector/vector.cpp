#include "vector.hpp"

vector::vector(int n) : len {n} {
  data = new int[n];
}

vector::~vector() {
  delete[] data;
}

int vector::get_n(int n) {
  return data[n];
}

void vector::set_n(int n, int value) {
  data[n] = value;
}
