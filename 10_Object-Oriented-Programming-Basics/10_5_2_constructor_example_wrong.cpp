#include <iostream>

class DistanceSensor
{
public:
    double range;

  // Constructor has not been initializes with the member variable, so it will contain a garbage value.

// public:
//   DistanceSensor() {
//     std::cout << "Enter the maximum range of the sensor in meters." << std::endl;
//   }
};

int main()
{
    DistanceSensor sensor;

    std::cout << sensor.range; // garbage value
}