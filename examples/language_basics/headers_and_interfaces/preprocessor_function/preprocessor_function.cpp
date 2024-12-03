#include <iomanip>
#include <iostream>

#define THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE 42

//#define IS_THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE(x) \
//  ((x) == THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE)

template < typename type_t>
bool IS_THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE (type_t x) {
  return x == static_cast<type_t>(THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE);
}

int main() {
  std::cout << std::boolalpha << IS_THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE(21) << std::endl;
  std::cout << std::boolalpha << IS_THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE(42) << std::endl;
}
