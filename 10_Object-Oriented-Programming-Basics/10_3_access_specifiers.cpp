#include <iostream>

class Robot
{
private:
  int battery_level_;  // Only accessible within the class

protected:
  int max_speed_;  // Accessible within the class and derived classes
                   // Facilitating code reuse and inheritance in robotics

public:
  // Constructor to initialize the robot's attributes
  Robot(int battery, int speed){
    battery_level_ = battery;
    max_speed_ = speed;
  }

  // Member function: prints the robot's status
  void print_status(){
    std::cout << "Battery Level: " << battery_level_ << std::endl;
    std::cout << "Max Speed: " << max_speed_ << std::endl;
  }
};

int main()
{
  // Creating an instance of the Robot class
  Robot my_robot(75, 10);
  my_robot.print_status();  // Allowed as print_status() is public
  return 0;
}