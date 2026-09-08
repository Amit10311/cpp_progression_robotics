#include <iostream>

// Declare a constant for the maximum speed of the robot
const float MAX_SPEED = 5.0;  // Maximum speed in meters per second

int main() {
    std::cout << "The maximum speed of the robot is: " << MAX_SPEED << " m/s" << std::endl;

    // Attempting to change the constant will cause a compile-time error
    // MAX_SPEED = 6.0;  // Uncommenting this line will result in an error

    return 0;
}