#include <iostream>

int main() {
  struct my_first_class {
    int a;
    
    void square_a() {
      a *= a;
    }
  };
  
  struct my_second_class : my_first_class {
    int b;
    
    int sum() {
      return a + b;
    }
  };
  
  auto my_obj2 = my_second_class {};
  my_obj2.a = 2;
  my_obj2.b = 5;

  my_obj2.square_a();
  auto i = my_obj2.sum();
  
  std::cout << "i = " << i << std::endl;
}
