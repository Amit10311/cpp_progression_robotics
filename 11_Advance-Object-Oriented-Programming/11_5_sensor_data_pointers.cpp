#include <iostream>

int main()
{
  int sensor_value = 100;
  int *ptr = &sensor_value;

  std::cout << "Sensor Value: " << *ptr << std::endl;  // Dereferencing ptr to get the value of sensor_value
  std::cout << "Memory Address: " << ptr << std::endl; // Displaying the memory address stored in ptr

  *ptr = 200; // Changing the value of sensor_value using the pointer
  std::cout << "Updated Sensor Value: " << sensor_value << std::endl;

  return 0;
}