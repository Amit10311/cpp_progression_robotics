// 11.4 Understanding this Pointer
#include <iostream> // Include the iostream library for input/output operations

// Define the Robot class
class Robot {
public:
  // Public member variables to store the coordinates of the robot
  int x, y;

  // Constructor to initialize the robot's coordinates
  Robot(int x, int y) {
    // Use the 'this' pointer to refer to the current object's member variables
    this->x = x;
    this->y = y;
  }

  // Member function to print the robot's coordinates
  void print_coordinates() {
    // Use the 'this' pointer to access the current object's member variables
    std::cout << "Coordinates: (" << this->x << ", " << this->y << ")"
              << std::endl;
  }
};

int main() {
  // Create a Robot object with initial coordinates (3, 7)
  Robot my_robot(3, 7);

  // Call the print_coordinates function to display the robot's coordinates
  my_robot.print_coordinates();

  return 0;
}