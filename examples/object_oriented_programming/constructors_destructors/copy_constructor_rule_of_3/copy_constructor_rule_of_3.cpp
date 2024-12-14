#include <iostream>

class c {
public:
  c();
  ~c();
  c(const c& other);
  c& operator =(const c& other);
  
  int get_value();
  void set_value(int v);

private:
  int* value;
};

c::c() : value {new int {5}} {
}

c::~c() {
  delete value;
}

c::c(const c& other) : value {new int {*other.value}} {
}

c& c::operator =(const c& other) {
  *value = *other.value;
}

int c::get_value() {
  return *value;
}

void c::set_value(int v) {
  *value = v;
}

int main() {
  c c1;
  c1.set_value(10);
  auto c2 = c1;

  std::cout << "c1.value = " << c1.get_value() << std::endl;
  std::cout << "c2.value = " << c2.get_value() << std::endl;
}
