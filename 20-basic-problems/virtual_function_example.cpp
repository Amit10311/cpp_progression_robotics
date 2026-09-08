#include <iostream>

// Base class Robot
class Robot
{
public:
  // Virtual function to allow derived classes to override this behavior
  virtual void move()
  {
    std::cout << "Robot is moving" << std::endl;
  }
};

// Derived class WheeledRobot inheriting from Robot
class WheeledRobot : public Robot
{
public:
  // Override the move function to provide specific behavior for WheeledRobot
  void move() override
  {
    std::cout << "Wheeled robot is rolling" << std::endl;
  }
};

class LeggedRobot : public Robot
{
public:
  void move() override
  {
    std::cout << "Legged robot is walking" << std::endl;
  }
};

int main()
{
  // Create a pointer to a Robot object, but instantiate it as a WheeledRobot
  Robot *robot1 = new WheeledRobot();
  Robot *robot2 = new LeggedRobot();

  // Call the move function, which will invoke the overridden version
  // based on the actual object type (polymorphism)
  robot1->move(); // Outputs: "Wheeled robot is rolling"
  robot2->move(); // Outputs: "Legged robot is walking"

  // Free the dynamically allocated memory
  delete robot1;
  delete robot2;

  return 0;
}