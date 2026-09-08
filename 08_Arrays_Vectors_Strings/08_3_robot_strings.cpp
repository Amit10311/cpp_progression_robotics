#include <iostream>
#include <string>

using namespace std;

int main() {
    string robot_name = "AutomaticAddisonBot";

    // Accessing string characters
    cout << "Robot Name: " << robot_name << endl;
    cout << "First Character: " << robot_name[0] << endl;

    // Modifying string
    robot_name[8] = '-';
    cout << "Modified Robot Name: " << robot_name << endl;
    // Finding the length of the string
    cout << "Length of Robot Name: " << robot_name.length() << endl;

    // Concatenating/Append strings
    string model = "X100";
    string full_name = robot_name + " " + model;
    cout << "Full Name: " << full_name << endl;

    // Finding the size/length of the string
    cout << "Length of Robot Full Name: " << full_name.length() << endl;

    return 0;
}