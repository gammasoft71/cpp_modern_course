#include "structs.hpp"

#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>

/// Construct a new instance of slow_to_copy.
slow_to_copy::slow_to_copy() : name("slow_to_copy") {
}

/// Construct a new instance of slow_to_copy.
slow_to_copy::slow_to_copy(const std::string& name) : name(name) {
}

/// Construct a new instance of slow_to_copy, copying the data from 'other'.
slow_to_copy::slow_to_copy(const slow_to_copy& other) {
    std::cout << __func__ << ": Please don't copy me. This is slow.\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    name = other.name;
}
