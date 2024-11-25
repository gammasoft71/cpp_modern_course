#include <iostream>

const unsigned int numbers[] {1000001, 1000002, 1000003, 1000004, 1000005, 1000006, 1000007, 1000008, 1000009};

bool is_odd(unsigned int i) {return i % 2 == 1;}

void part1() {
  unsigned int sum_odd = 0;
  unsigned int sum_eve = 0;
  for (int num : numbers) {
    // Note the usage of ternary expression to select the sum to which we add
    // the ternary expression returns a reference to the right sum
    (is_odd(num) ? sum_odd : sum_eve) += num;
  }
  std::cout << "Sums: odd = " << sum_odd << ", even = " << sum_eve << "\n";
}

void part2() {
  // print smallest n for which 1 + 2 + ... + n > 10000
  int sum = 0;
  int i = 1;
  while(sum <= 10000) {
    ++i;
    sum += i;
  }
  std::cout << i << "\n";
}

void part2_bis() {
  // print smallest n for which 1 + 2 + ... + n > 10000
  int sum = 0;
  int i = 1;
  do {
    ++i;
    sum += i;
  } while(sum <= 10000);
  std::cout << i << "\n";
}

enum class language {english, french, german, italian, other};

void part3(language l) {
  switch (l) {
    case language::english:
      std::cout << "Hello\n";
      break;
    case language::french: std::cout << "Salut\n";
      break;
    case language::german:
      std::cout << "Hallo\n";
      break;
    case language::italian:
      std::cout << "Ciao\n";
      break;
    default:
      std::cout << "I don't speak your language\n";
  }
}

int main() {
  part1();
  part2();
  part2_bis();
  part3(language::english);
  return 0;
}
