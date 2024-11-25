
/* Tasks:
 * 1. Check out structs.h. It defines two structs that we will work with.
 *    fast_to_copy
 *    slow_to_copy
 *    They are exactly what their name says, so let's try to avoid copying the latter.
 * 2. Using "print_name()" as an example, write a function that prints the name of "slow_to_copy".
 *    Call it in main().
 * 3. Try passing by copy and passing by reference, see the difference.
 * 4. When passing by reference, ensure that your "print_name" cannot inadvertently modify the original object.
 *    To test its const correctness, try adding something like
 *      argument.name = "other name";
 *    to your print function.
 *    Try both with and without const attributes in your print function's signature.
 */

#include "structs.hpp" // The data structs we will work with

#include <iostream> // For printing

void print_name(fast_to_copy argument) {
  std::cout << argument.name << '\n';
}

void inefficient_print_name(slow_to_copy argument) {
  std::cout << argument.name << '\n';
  
  // We can change the argument's name because it's a copy:
  argument.name = "New name";
}

void print_name(const slow_to_copy & argument) {
  std::cout << argument.name << '\n';
  
  // We are unable to change name, as we should:
  //argument.name = "New name";
}

int main() {
  fast_to_copy fast = {"Fast"};
  print_name(fast);
  
  slow_to_copy slow = {"Slow"};
  print_name(slow);
  
  std::cout << "Now printing with copy:\n";
  inefficient_print_name(slow);
  
  return 0;
}
