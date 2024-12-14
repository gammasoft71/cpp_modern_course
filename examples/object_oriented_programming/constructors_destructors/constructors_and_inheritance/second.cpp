#include "second.hpp"

second::second() : first {}, b {0} {
}

second::second(int b) : b {b} {  // first {} implicitly
}

second::second(int a, int b) : first {a}, b {b} {
}

