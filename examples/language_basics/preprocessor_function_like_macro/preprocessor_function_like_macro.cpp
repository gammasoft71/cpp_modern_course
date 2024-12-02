#include <iostream>

// constant macro
#define THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE 42

// function-style macro
#define CHECK_THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE(x) \
  if ((x) != THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE)    \
    std::cerr << #x " was not the response\n";

int main() {
  CHECK_THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE(42)
  CHECK_THE_ANSWER_TO_THE_ULTIMATE_QUESTION_OF_LIFE(24)
}
