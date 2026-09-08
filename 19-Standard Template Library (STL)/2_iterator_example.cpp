#include <iostream>
#include <vector>

int main() {
    std::vector<int> sensor_data = {10, 20, 30, 40, 50};

    // Using iterators to traverse and print the vector
    for (auto it = sensor_data.begin(); it != sensor_data.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Using iterators to modify elements in the vector
    for (auto it = sensor_data.begin(); it != sensor_data.end(); ++it) {
        *it *= 2;
    }

    // Printing the modified vector
    for (const auto& value : sensor_data) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}