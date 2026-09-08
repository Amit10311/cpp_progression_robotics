#include <iostream>
using namespace std;

// Definition of the DistanceSensor class
class DistanceSensor {
private:
  double range; // Maximum range of the sensor in meters

public:
  // Constructor that initializes the sensor's range
  DistanceSensor(double value) : range(value) {
    cout << "Enter the maximum range of the sensor in meters." << endl;
  }

  // Method to display the maximum range of the sensor
  void displayRange() {
    cout << "Sensor maximum range: " << range << " meters" << endl;
  }
};

int main() {
  // Creating an instance of DistanceSensor with a range of 1.5 meters
  // DistanceSensor front_sensor(1.5);
  DistanceSensor front_sensor(1.5);
  front_sensor.displayRange(); // Calling the display method
  return 0;
}
