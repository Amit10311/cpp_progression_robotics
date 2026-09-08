#include <iostream>

using namespace std;

int main() {
    int robot_id = 42;
    // Pointer to the robot_id variable
    int* ptr = &robot_id;

    cout << "Robot ID: " << robot_id << endl;
    cout << "Pointer Value: " << ptr << endl;
    cout << "Dereferenced Pointer: " << *ptr << endl<< endl;

    // Updating the robot_id using the pointer
    *ptr = 99;
    cout << "Updated Robot ID: " << robot_id << endl;
    cout << "Updated Pointer Value: " << ptr << endl;
    cout << "Dereferenced Updated Pointer: " << *ptr << endl;

    return 0;
}