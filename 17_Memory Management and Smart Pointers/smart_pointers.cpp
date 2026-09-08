#include <iostream>
#include <memory>

// Sensor class representing a sensor with a name and a value
class Sensor {
private:
    std::string name;
    double value;

public:
    Sensor(const std::string& name, double value) :
        name(name), value(value) {}

    void printInfo() const {
        std::cout << "Sensor: " << name << ", Value: " << value << std::endl;
    }
};

int main() {
    // Create a unique_ptr to a Sensor object
    std::unique_ptr<Sensor> sensor1 = std::make_unique<Sensor>("TemperatureSensor", 25.5);
    sensor1->printInfo();

    // Create a shared_ptr to a Sensor object
    std::shared_ptr<Sensor> sensor2 = std::make_shared<Sensor>("HumiditySensor", 60.0);
    sensor2->printInfo();

    // Create a weak_ptr to the shared_ptr
    std::weak_ptr<Sensor> weak_sensor = sensor2;
    if (auto shared_sensor = weak_sensor.lock()) {
        shared_sensor->printInfo();
    }

    return 0;
}