#include <iostream>
/**
 * The static keyword in C++ has two primary uses:
 *
 * 1. Static variables: When a variable is declared as static inside a function, it retains its value between function calls.
 *
 * 2. Static member variables and functions: When a member variable or function is declared as static in a class,
 * it belongs to the class itself rather than any specific instance of the class.
 */
void increment_counter(){
  static int count = 0;
  count++;
  std::cout << "Counter: " << count << std::endl;
}

int main()
{
  for (int i = 0; i < 5; i++)
  {
    increment_counter();
  }
  return 0;
}
