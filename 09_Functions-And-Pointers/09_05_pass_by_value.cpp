#include <iostream>

// Function that uses pass by value
void passByValue(int num) {
  num = 20; // Changes only the local copy
  std::cout << "Inside function (Pass by Value): " << num << std::endl;
}

// Function that uses call/pass by reference
void passByReference(int &num) {
  num = 20; // Changes the original variable
  std::cout << "Inside function (Pass by Reference): " << num << std::endl;
}

// Function that uses call/pass by const reference
void passByConstReference(const int &num) {
  // num = 20; // This would cause a compilation error because num is const
  std::cout << "Inside function (Pass by Const Reference): " << num
            << std::endl;
}

int main() {
  int x = 10;
  std::cout << "Before function call: " << x << std::endl;

  passByValue(x); // Passes a copy of x
  std::cout << "After passByValue function call: " << x
            << std::endl; // x remains unchanged

  // passByReference(x); // Passes a reference to x
  std::cout << "After passByReference function call: " << x
            << std::endl; // x is changed

  passByConstReference(x); // Passes a const reference to x
  std::cout << "After passByConstReference function call: " << x
            << std::endl; // x remains unchanged

  return 0;
}