#include <iostream>

int ints1[4] = {1, 2, 3, 4};
int ints2[] = {1, 2, 3, 4}; // identical

char chars1[3] = {'a', 'b', 'c'};    // char array
char chars2[4] = "abc";              // valid native string
char chars3[4] = {'a', 'b', 'c', 0}; // same valid native string

int i1 = ints1[2];  // i1 = 3
char c = chars1[8]; // at best garbage, may segfault
int i2 = ints1[4];  // also garbage !

int main() {
  std::cout << "Main function" << std::endl;
}
