#include <iostream>

class c {
public:
  c();
  c(int a);
  ~c();
  //...
protected:
  int a;
};

// note: special notation for
// initialization of members
c::c() : a {0} {}

c::c(int a) : a {a} {}

c::~c() {}

int main() {
  std::cout << "Class constructors and destructors" << std::endl;
}
