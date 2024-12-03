#include <iostream>

bool b = true; // boolean, true or false

char c = 'a';   // min 8 bit integer
char cs = -1;   // may be signed
char cu = '\2'; // or not
                // can store an ASCIl character

signed char sc = -3;  // min 8 bit signed integer
unsigned char uc = 4; // min 8 bit unsigned integer

short int si = -5;          // min 16 bit signed integer
short s=-6;                 // int is optional
unsigned short int usi = 7; // min 16 bit unsigned integer
unsigned short us = 8;      // int is optional

int main() {
  std::cout << "Basic types" << std::endl;
}
