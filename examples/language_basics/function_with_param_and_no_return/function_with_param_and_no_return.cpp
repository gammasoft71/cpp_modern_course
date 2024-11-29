#include <iostream>
#include <string>

// function with param and no return
void println(const std::string& msg) {
  std::cout << msg << std::endl;
}

int main() {
  println("Hello, World!");
}
