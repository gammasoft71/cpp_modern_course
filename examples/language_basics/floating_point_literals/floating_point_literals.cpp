#include <iostream>

double value_1 = 12.34;
double value_2 = 12.;
double value_3 = .34;
double value_4 = 12e34;           // 12 * 10^34
double value_5 = 12E34;           // 12 * 10^34
double value_6 = 12e-34;          // 12 * 10^-34
double value_7 = 12.34e34;        // 12.34 * 10^34

double value_8 = 123'456.789'101; // digit separators, C++14
double value_9 = 0x4d2.4p3;       // hexfloat, 0x4d2.4 * 2^3
                                  // = 1234.25 * 2^3 = 9874

// 3.14f, 3.14F, // float
// 3.14,  3.14,  // double
// 3.141, 3.14L, // long double

int main() {
  std::cout << "Floating-point literals" << std::endl;
}
