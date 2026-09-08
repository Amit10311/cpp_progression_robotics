#include <iostream>

int main() {
    double speed;

    std::cout << "Enter the robot's speed (m/s): ";
    std::cin >> speed;
    if (!std::cin) { // Check for input failure
        std::cerr << "Error: Please enter a valid number for speed." << std::endl;
        return 1; // Exit with error code
    }

    std::cout << "Setting robot speed to " << speed << " m/s." << std::endl;

    // Code to set the robot speed would go here

    return 0;
}