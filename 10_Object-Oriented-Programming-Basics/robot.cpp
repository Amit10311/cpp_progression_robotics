#include "robot.hpp"
#include <iostream>

// Definition of the move() method
void Robot::greet() {
  std::cout << "Hello, I am a robot." << std::endl;
}

// Definition of the move() method
void Robot::move() {
  // Code to move the robot
  std::cout << "The robot is moving." << std::endl;
}

int main() {
  // Create an instance of the Robot class
  Robot my_robot;

  // Call the greet() and move() methods
  my_robot.greet();

  // Call the move() method to simulate the robot moving
  my_robot.move();
  return 0;
}