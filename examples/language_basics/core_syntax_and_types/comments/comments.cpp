#include <iostream>

// single-line comment
int value = 0;

/*
 * multi-line comment
 */
std::string name();
 
/// Doxygen comments
/// @brief Adds two specified integers.
/// @param value_a The first integer to add.
/// @param value_b The second integer to add.
/// @return The result of the addition.
/// @see https://www.doxygen.nl/manual/commands.html
int add(int value_a, int value_b);
 
int main() {
  std::cout << "Comments" << std::endl;
}
