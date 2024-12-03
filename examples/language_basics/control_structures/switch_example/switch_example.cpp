#include <iostream>


int main() {
  enum class lang {french, german, english, other};
  lang language = lang::french;
  switch (language) {
    case lang::french:
      std::cout << "Bonjour";
      break;
    case lang::german:
      std::cout << "Guten Tag";
      break;
    case lang::english:
      std::cout << "Good morning";
      break;
    default:
      std::cout << "I do not speak your language";
  }
  
  std::cout << std::endl;
}
