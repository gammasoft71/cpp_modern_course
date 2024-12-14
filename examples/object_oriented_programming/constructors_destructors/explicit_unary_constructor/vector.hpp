#pragma once

class vector {
public:
  explicit vector(int n);
  vector(const vector& other);
  ~vector();

  int len;
  int* data;
};
