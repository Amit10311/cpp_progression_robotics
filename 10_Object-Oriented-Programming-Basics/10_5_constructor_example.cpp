#include <iostream>
#include <string>

using namespace std;

// Robot class definition with a constructor to initialize the robot's attributes
class Robot
{
public:
  // Constructor that initializes the robot's name and position
  // Robot(std::string name, int x, int y) {
  //     name_ = name; // Set robot name
  //     x_ = x;       // Set x-coordinate
  //     y_ = y;       // Set y-coordinate
  //     std::cout << "Robot " << name_ << " created at position (" << x_ << ", " << y_ << ")" << std::endl;}

  // Using member initializer list for better performance and readability
  Robot(string name, int x, int y) : name_(name), x_(x), y_(y)
  {
    cout << "Robot " << name_ << " created at position (" << x_ << ", " << y_ << ")" << endl;
  } // Constructor with default position

public:
  std::string name_; // Robot name
  int x_;            // x-coordinate
  int y_;            // y-coordinate
};

int main()
{
  // Create two Robot objects with different names and positions
  Robot robot1("AutomaticAddisonBot1", 0, 0);
  Robot robot2("AutomaticAddisonBot2", 10, 20);

  //  Accessing the attributes of the robots if public
  cout << "Attributes of robot if public: " << endl;
  cout << "Robot " << robot1.name_ << "created at position :(" << robot1.x_ << ", " << robot1.y_ << ")" << endl;
  return 0;
}