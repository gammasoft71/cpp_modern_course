#include "my_struct.hpp"
#include <iostream>

int main() {
  using namespace std;
  
  count_item += 42;
  cout << "count_item = " << count_item << endl;
  cout << "file_name = " << file_name << endl << endl;
  
  my_struct::count_item += 21;
  cout << "my_struct::count_item = " << my_struct::count_item << endl;
  cout << "my_struct::file_name = " << my_struct::file_name << endl;
}
