#include <iostream>

struct c {
  c();
  c(const c& other) = delete;
  
  int a;
};

c::c() : a {5} {}

int main() {
  c c1;
  //auto c2 = c1; // error !

  std::cout << "c1.a = " << c1.a << std::endl;
}
