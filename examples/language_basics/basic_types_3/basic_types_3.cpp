#include <iostream>
#include <string>

float f = 0.19f;        // 32 (1+8+23) bit float
double d = 0.20;        // 64 (1+11+52) bit float
long double ld = 0.211; // min 64 bit float

const char* nstr = "native string"; // array of chars ended by \0
std::string str = "string";         // class provided by the std

int main() {
  std::cout << "basic_types_3" << std::endl;
}
