#include <iostream>

struct big_struct {
  // ...
};

big_struct s;

// parameter by value
void print_val(big_struct p) {
  // ...
}
print_val(s); // copy

// parameter by reference
void print_ref(big_struct& q) {
  // ...
}
print_ref(s); // no copy

int main() {
  std::cout << "Paramters are passed by value" << std::endl;
}
