#include <iostream>

void println (const char* value) {
  if (value == nullptr) goto end;
  std::cout << value;
  
  end:
  std::cout << std::endl;
}

int main() {
  const char* null_str = nullptr;
  println(null_str);
  const char* str = "Hello, World!";
  println(str);
}
