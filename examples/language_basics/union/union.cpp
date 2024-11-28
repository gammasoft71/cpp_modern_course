#include <iostream>

int main() {
  union duration {
    int seconds;
    short hours;
    char days;
  };

  duration d1, d2, d3;
  d1.seconds = 259200;
  d2.hours = 72;
  d3.days = 3;
  d1. days = 3; // d1.seconds overwritten
  int a = d1.seconds; // d1.seconds is garbage

  std::cout << "Union" << std::endl;
}
