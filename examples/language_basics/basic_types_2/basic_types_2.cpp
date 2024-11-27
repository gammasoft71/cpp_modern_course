#include <iostream>

int i = -9;           // min 16, usually 32 bit
unsigned int ui = 10; // min 16, usually 32 bit

long l = -111;                // min 32 bit signed integer
long int li = -121;           // int is optional
unsigned long ul = 13Ul;      // min 32 bit unsigned integer
unsigned long int uli = 14Ul; // int is optional

long long ll = -1511;                // min 64 bit signed integer
long long int lli = -161l;           // int is optional
unsigned long long ull = 17ull;      // min 64 bit unsigned integer
unsigned long long int ulli = 18ull; // int is optional

int main() {
  std::cout << "Basic types 2" << std::endl;
}
