#pragma once 
#include <iostream>
#include <limits>

bool bit64_check() {
    // Check the size of the largest integer type supported by the system
    if (sizeof(long long) >= 8) {
        // If long long is 8 bytes (64-bit), the system supports 64-bit integers
        return true;
    }
    else
    {
        return false;
    }
}