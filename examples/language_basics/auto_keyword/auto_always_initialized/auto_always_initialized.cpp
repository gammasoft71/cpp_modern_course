#include <iostream>

int main() {
  using namespace std;
  
  struct my_struct {
    int value;
    float percent;
  };
  
  my_struct v1;
  cout << "v1.value = " << v1.value << ", v1.percent = " << v1.percent << endl;
  // v1.value = 86589520, v1.percent = 2.8026e-45
  
  my_struct v2 {};
  cout << "v2.value = " << v2.value << ", v2.percent = " << v2.percent << endl;
  // v2.value = 0, v2.percent = 0

  auto v3 = my_struct {};
  cout << "v3.value = " << v3.value << ", v3.percent = " << v3.percent << endl;
  // v3.value = 0, v3.percent = 0
}

