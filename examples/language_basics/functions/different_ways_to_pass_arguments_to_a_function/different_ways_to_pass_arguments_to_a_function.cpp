#include <iostream>

struct foo {
  // ...
};
foo bar;

void fct_val(foo value);
fct_val(bar);   // by value

void fct_ref(const foo& value);
fct_ref(bar);   // by reference

void fct_ptr(const foo* value);
fct_ptr (&bar); // by pointer

void fct_write(foo& value);
fct_write(bar); // non-const ref

int main() {
  std::cout << "Different ways to pass arguments to a function" << std::endl;
}
