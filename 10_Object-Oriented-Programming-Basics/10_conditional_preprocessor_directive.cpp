#include <iostream>
#include <string>
using namespace std;

// Conditional preprocessor directive for controlling access specifier
#ifdef TESTING
#define PRIVATE public
#else
#define PRIVATE private
#endif

// Robot class definition with a constructor to initialize the robot's
// attributes
class Robot
{
  PRIVATE :                    // Controlled by the preprocessor directive
  std::string name_; // Robot name
  int x_;                      // x-coordinate
  int y_;                      // y-coordinate

public:
  // Constructor that initializes the robot's name and position
  Robot(std::string name, int x, int y)
  {
    name_ = name; // Set robot name
    x_ = x;       // Set x-coordinate
    y_ = y;       // Set y-coordinate
  }

  // Public method to display robot details
  void display()
  {
    cout << "Robot " << name_ << " is at position (" << x_ << ", " << y_ << ")" << endl;
  }
};

int main()
{
  // Create two Robot objects with different names and positions
  Robot robot1("AutomaticAddisonBot1", 0, 0);
  Robot robot2("AutomaticAddisonBot2", 10, 20);

// Accessing the attributes of the robots (if TESTING is defined, they are
// public)
#ifdef TESTING
  cout << "Testing Mode: Accessing private members directly." << endl;
  cout << "Test Robot " << robot1.name_ << " created at position: (" << robot1.x_ << ", " << robot1.y_ << ")" << endl;
  cout << "Test Robot " << robot2.name_ << " created at position: (" << robot2.x_ << ", " << robot2.y_ << ")" << endl;
#else
  cout << "Normal Mode: Accessing members through public methods." << endl;
  robot1.display();
  robot2.display();
#endif

  return 0;
}