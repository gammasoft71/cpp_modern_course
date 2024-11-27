#include <iostream>

int main(int argc, char* argv[]) {
  for (auto index = 0; index < argc; index++)
    std::cout << (index == 0 ? "Main function with arguments [" : ", ") << argv[index];
  std::cout << "]" << std::endl;
}
