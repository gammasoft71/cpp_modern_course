#include <iostream>
#include <sstream>

using data = char;
using data_stream = std::stringstream;
const data data_breaker = ',';

data_stream get_data_stream() {
  data_stream d;
  d.str("Hello, World!");
  return d;
}

void consume_data(const data& d) {
  std::cout << d;
}

int main() {
  data_stream ds = get_data_stream();
  while (!ds.eof()) {
    data d;
    ds.read(&d, 1);
    if (d == data_breaker)
      break;
    consume_data(d);
  }
  std::cout << std::endl;
}
