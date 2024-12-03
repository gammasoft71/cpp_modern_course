#include <iostream>

int value_1 = 4284;                  // decimal (base 10)
int value_2 = 0b0001000010111100;    // binary (base 2) since C++14
int value_3 = 010274;                // octal (base 8)
int value_4 = 0x10bc;                // hexadecimal (base 16)
int value_5 = 0x10BC;                // hexadecimal (base 16)

int value_6 = 123'456'789;           // digit separators, since C++14
int value_7 = 0b0001'0000'1011'1100; // digit separators, since C++14

// 4284             // int
// 4284u,   4284U   // unsigned int
// 42841,   4284L   // long
// 4284ul,  4284UL  // unsigned long
// 428411,  4284LL  // long long
// 4284ull, 4284ULL // unsigned long long

int main() {
  std::cout << "Integer literals" << std::endl;
}
