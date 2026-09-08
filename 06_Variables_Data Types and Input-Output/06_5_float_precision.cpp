#include <iostream>
#include <iomanip>

int main() {
    // Floating-point number without specified precision
    double sensor_value = 123.456789;

    // Output the default precision
    std::cout << "Default precision: " << sensor_value << std::endl;

    // Set precision to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Precision set to 2 decimal places: " << sensor_value << std::endl;

    // Set precision to 5 decimal places
    std::cout << std::setprecision(5);
    std::cout << "Precision set to 5 decimal places: " << sensor_value << std::endl;

    return 0;
}