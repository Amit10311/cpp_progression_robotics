#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> motor_speeds;

    // Adding elements to the vector
    motor_speeds.push_back(100);
    motor_speeds.push_back(200);
    motor_speeds.push_back(150);

    // Checking if the vector is empty
    if (motor_speeds.empty()) {
      cout << "The motor_speeds vector is empty." << endl;
    } else {
      cout << "The motor_speeds vector is not empty." << endl;
    }

    // Checking the size of the vector
    cout << "Size of motor_speeds vector: " << motor_speeds.size() << endl;

    // Accessing vector elements
    cout << "Motor Speeds:" << endl;
    for (int i = 0; i < motor_speeds.size(); i++) {
        cout << "Motor " << i + 1 << ": " << motor_speeds[i] << endl;
    }

    return 0;
}