#include <iostream>

struct small_struct {int a;};
small_struct s = {1};

void change_val(small_struct p) {
  p.a = 2;
}
change_val(s);
// s.a == 1
  
void change_ref(small_struct& g) {
  q.a = 2;
}
change_ref(s);
// s.a == 2
  
int main() {
  std::cout << "Pass by value or reference" << std::endl;
}
