#include <iostream>

// Base class
class Actuator {
public:
  virtual void activate() = 0; // Pure virtual function making Actuator an abstract class
};

// Derived class
class Motor : public Actuator
{
public:
  void activate() override
  {
    std::cout << "Motor is running." << std::endl;
  }
};

// Another derived class
class Servo : public Actuator {
public:
  void activate() override
  {
    std::cout << "Servo is adjusting position." << std::endl;
  }
};

// Function that demonstrates polymorphism
void test_actuator(Actuator &actuator)
{
  actuator.activate(); // Calling the activate function polymorphically
}

int main()
{
  Motor motor;
  Servo servo;

  test_actuator(motor);
  test_actuator(servo);

  return 0;
}