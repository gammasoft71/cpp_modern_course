#include <iostream>


int main() {
  int i = 4;
  int* pi = &i;
  int j= *pi + 1;
  
  int ai[] = {1, 2, 3};
  int* pai = ai; // decay to pointer
  int* paj = pai + 1;
  int k = *paj + 1;
  
  // compile error
  //int* pak = k;
  
  // segmentation fault !
  int* pak = (int*)k;
  int l = *pak;

  std::cout << "Main function" << std::endl;
}
