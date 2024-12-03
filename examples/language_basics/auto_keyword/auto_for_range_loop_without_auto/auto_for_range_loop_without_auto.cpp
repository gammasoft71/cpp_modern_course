#include <iostream>
#include <tuple>
#include <vector>

int main() {
  using namespace std;

  vector<tuple<int, double>> id_usages = vector<tuple<int, double>> {
    make_tuple(8634, 0.07),
    make_tuple(1482, 0.2),
    make_tuple(4821, 0.15),
    make_tuple(2563, 0.4),
    make_tuple(3920, 0.18)
  };
  
  for (const tuple<int, double>& item : id_usages)
    cout << "id: " << get<0>(item) << " => " << get<1>(item) * 100 << "%" << endl;
}
