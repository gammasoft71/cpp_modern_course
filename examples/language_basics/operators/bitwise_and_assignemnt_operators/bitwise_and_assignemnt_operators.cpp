#include <iomanip>
#include <iostream>

int main() {
  unsigned i = 0xee & 0x55; // 0x44
  i |= 0xee;                // Oxee
  i ^= 0x55;                // Oxbb
  unsigned j = ~0xee;       // Oxffffff11
  unsigned k = 0x1f << 3;   // 0xf8
  unsigned l = 0x1f >> 2;   // 0x7
  
  std::cout << std::hex << "i = 0x" << i << ", j = 0x" << j;
  std::cout << ", k = 0x" << k << ", l = 0x" << l << std::endl;
}
