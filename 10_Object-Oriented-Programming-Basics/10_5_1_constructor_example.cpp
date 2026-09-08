# include <iostream>

// Definition of the DistanceSensor class
class DistanceSensor{
public:
    double range;

public:
    // Constructor that initializes the sensor's range
    DistanceSensor() : range(0.0) {}
};

int main()
{
    DistanceSensor sensor;

    std::cout << sensor.range; // 0.0
}