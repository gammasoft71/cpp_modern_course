#include <iostream>

struct c {
  c();
  c(const c& other);
  
  int a;
};

c::c() : a {5} {}

c::c(const c& other) : a {other.a} {}

int main() {
  auto c1 = c {};
  std::cout << "c1.a = " << c1.a << std::endl;

  c1.a += 5;
  auto c2 = c {c1};
  std::cout << "c2.a = " << c2.a << std::endl;

  c2.a += 5;
  auto c3 = c2;
  std::cout << "c3.a = " << c3.a << std::endl;
}
