#include <iostream>

int main() {
  struct my_first_class {
    int a;
    
    void square_a() {
      a *= a;
    }
    
    int sum(int b) {
      return a + b;
    }
  };
  
  auto my_obj = my_first_class {};
  my_obj.a = 2;
  
  // let's square a
  my_obj.square_a();
  
  std::cout << "my_obj.a = " << my_obj.a << std::endl;
}
