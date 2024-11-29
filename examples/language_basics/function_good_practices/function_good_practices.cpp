#include <iostream>

/// @brief Counts number of dilepton events in data.
/// @param a Dataset to search.
/// @return The number of dilepton events.
unsigned int count_dileptons(data& d) {
  select_events_with_muons(d);
  select_events_with_electrons(d);
  return d.size();
}
  
int main() {
  std::cout << "Good practices" << std::endl;
}
