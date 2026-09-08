#include <iostream>
#include <deque>

int main() {
    // Create a deque to simulate incoming sensor readings
    std::deque<float> sensor_data;

    // Add new readings to the back of the deque
    sensor_data.push_back(2.5);
    sensor_data.push_back(3.1);
    sensor_data.push_back(4.7);

    // Show all current readings
    std::cout << "Current sensor data:";
    for (float reading : sensor_data) {
        std::cout << ' ' << reading;
    }
    std::cout << std::endl;

    // Process the oldest reading first (front of the deque)
    std::cout << "Processing sensor reading: " << sensor_data.front() << std::endl;
    sensor_data.pop_front();

    // Add more readings after processing the first one
    sensor_data.push_back(5.5);
    sensor_data.push_back(6.8);

    // Process the next oldest reading
    std::cout << "Processing sensor reading: " << sensor_data.front() << std::endl;
    sensor_data.pop_front();

    // Show the remaining readings after processing
    std::cout << "Remaining sensor data:";
    for (float reading : sensor_data) {
        std::cout << ' ' << reading;
    }
    std::cout << std::endl;

    return 0;
}