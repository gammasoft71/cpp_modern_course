#include <iostream>
#include <tuple>
#include <vector>

int main() {
  using namespace std;

  auto id_usages = vector {
    make_tuple(8634, 0.07),
    make_tuple(1482, 0.2),
    make_tuple(4821, 0.15),
    make_tuple(2563, 0.4),
    make_tuple(3920, 0.18)
  };
  
  for (auto [id, percent] : id_usages)
    cout << "id: " << id << " => " << percent * 100 << "%" << endl;
}
