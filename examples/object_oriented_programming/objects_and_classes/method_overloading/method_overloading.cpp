#include <iostream>

struct my_first_class {
  int a;
  
  int sum(int b);
  int sum(int b, int c);
};

int my_first_class::sum(int b) {
  return a + b;
}

int my_first_class::sum(int b, int c) {
  return a + b + c;
}

int main() {
  my_first_class my_obj;
  my_obj.a = 2;
  
  std::cout << "my_obj.sum(4, 6) = " << my_obj.sum(4, 6) << std::endl;
}
