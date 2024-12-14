#pragma once

class vector {
public:
  vector(int len);
  ~vector();
  
  int get_n(int n);
  void set_n(int n, int value);

protected:
  int len;
  int* data;
};
