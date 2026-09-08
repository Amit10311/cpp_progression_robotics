#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::stringstream sst;
    int  motor_speed = 150;
    double battery_level = 12.5;

    // Using stringstream to create a diagnostic log entry
    sst << "Motor Speed: " <<  motor_speed << " RPM, Battery Level: " << battery_level << " Volts";

    // Converting stringstream to string for output
    std::string log_entry = sst.str();
    std::cout << "Log Entry: " << log_entry << std::endl;

    return 0;
}