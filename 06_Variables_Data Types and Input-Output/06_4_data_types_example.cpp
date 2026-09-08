#include <iostream>
#include <string>

int main() {
    // Integer type for counting or indexing
    int encoder_ticks = 720;

    // Floating-point type for precise measurements
    double battery_voltage = 12.7;

    // Character type for simple commands
    char motor_direction = 'F'; // 'F' for forward, 'B' for backward

    // Boolean type for status checks
    bool is_sensor_active = true;

    // String type for messages
    std::string robot_name = "AutomaticAddisonBot";

    // Displaying values
    std::cout << "Encoder Ticks: " << encoder_ticks << std::endl;
    std::cout << "Battery Voltage: " << battery_voltage << " V" << std::endl;
    std::cout << "Motor Direction: " << motor_direction << std::endl;
    std::cout << "Sensor Active: " << (is_sensor_active ? "Yes" : "No") << std::endl;
    std::cout << "Robot Name: " << robot_name << std::endl;

    return 0;
}