#include <iostream>

int main() {
  int i = 0; i++; // i = 1
  int j = ++i;    // i = 2, j = 2
  int k = i++;    // i = 3, K = 2
  int l = --i;    // i = 2, l = 2
  int m = i--;    // i = 1, m = 2
  
  std::cout << "i = " << i << ", j = " << j << ", k = " << k;
  std::cout << ", l = " << l << ", m = " << m << std::endl;
}
