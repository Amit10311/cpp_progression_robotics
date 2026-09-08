#include <iostream>
using namespace std;

class Robot
{
public:
  static int total_robots;

    Robot()
    {
        total_robots++;
    }
};

int Robot::total_robots = 0;

int main()
{
  Robot r1, r2, r3;

  // Accessing the static member variable directly through the class name
  cout << Robot::total_robots << '\n';

  return 0;
}
