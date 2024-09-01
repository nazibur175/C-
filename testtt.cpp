#include <iostream>
#include <climits>

int leftmostSetBitPosition(int n) {
    if (n == 0)
        return 0;  // No set bits in zero

    // Calculate the position of the leftmost set bit
    return __builtin_ctz(n)+1;
}

int main() {
    int num = 10; // Example number
    int position = leftmostSetBitPosition(num);
    
    if (position != 0)
        std::cout << "The leftmost set bit is at position: " << position << std::endl;
    else
        std::cout << "No set bit found." << std::endl;

    return 0;
}
