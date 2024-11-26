#include <iostream>

struct dont_copy_me {
  int result_a;
  int result_b;
  
  // This is material for the second day:
  dont_copy_me() = default;
  dont_copy_me(const dont_copy_me& other) : result_a {other.result_a}, result_b {other.result_b} {
    std::cout << "Please don't copy me\n";
  }
};

int main() {
  // We create an array of dont_copy_me structs:
  dont_copy_me collection[10];

  // Task 1:
  // Write a for loop that initialises each struct's result_a and result_b with ascending integers.
  // Verify the output of the program before and after you do this.
  for (auto index = 0 ; index < 10 ; ++index) {
    collection[index].result_a = index;
    collection[index].result_b = 2 * index;
  }
  
  // Task 2:
  // We use a range-based for loop to analyse the array of structs.
  // The problem is: we are copying every dont_copy_me ...
  // Fix this loop using references.
  // Hint: Fix the type declaration "auto" in the loop head.
  auto result_a = 0;
  auto result_b = 0;
  for (const auto& item : collection) {
    result_a += item.result_a;
    result_b += item.result_b;
  }
  std::cout << "result_a = " << result_a << "\tresult_b = " << result_b << "\n";
}

// Task 3:
// Think about which loop needs write access to the dont_copy_me.
// Make sure that all references that don't need write access are const.
// Hint: C++ understands "cont auto".

