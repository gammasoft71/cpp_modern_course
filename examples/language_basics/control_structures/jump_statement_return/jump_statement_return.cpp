#include <iostream>

void println (const char* value) {
  if (value == nullptr) return;
  std::cout << value << std::endl;
}

int main() {
  const char* null_str = nullptr;
  println(null_str);
  const char* str = "Hello, World!";
  println(str);
}
