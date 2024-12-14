#pragma once

class vector {
public:
  vector(int n);
  vector(const vector& other);
  ~vector();

  int len;
  int* data;
};
