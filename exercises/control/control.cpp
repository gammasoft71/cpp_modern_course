#include <iostream>

const unsigned int numbers[] {1000001, 1000002, 1000003, 1000004, 1000005, 1000006, 1000007, 1000008, 1000009};

bool is_odd(unsigned int i) {return i % 2 == 1;}

void part1() {
  unsigned int sum_odd = 0;
  unsigned int sum_eve = 0;
  for (int i = 0; i < 9; ++i) {
    unsigned int num = numbers[i];
    if (is_odd(num)) {
      sum_odd += num;
    } else {
      sum_eve += num;
    }
  }
  std::cout << "Sums: odd = " << sum_odd << ", even = " << sum_eve << "\n";
}

void part2() {
  // print smallest n for which 1 + 2 + ... + n > 10000
  int sum = 0;
  for (int i = 1; ; i++) {
    sum += i;
    if (sum > 10000) {
      std::cout << i << "\n";
      break;
    }
  }
}

enum class language {english, french, german, italian, other};

void part3(language l) {
  if (l == language::english) {
    std::cout << "Hello\n";
  } else if (l == language::french) {
    std::cout << "Salut\n";
  } else if (l == language::german) {
    std::cout << "Hallo\n";
  } else if (l == language::italian) {
    std::cout << "Ciao\n";
  } else {
    std::cout << "I don't speak your language\n";
  }
}

int main() {
  part1();
  part2();
  part3(language::english);
  return 0;
}
