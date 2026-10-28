#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int compute_closest_to_zero(vector<int> ts) {
    // Write your code here to compute the temperature closest to zero.
    if (ts.empty()) {
        return 0;
    }

    int closest = INT_MAX;
    for (int temp : ts) {
        if (abs(temp) < abs(closest) || (abs(temp) == abs(closest) && temp > closest)) {
            closest = temp;
        }
    }

    return closest;
}

int main() {
    // Example usage:
    vector<int> temperatures = {-10, -7, -3, -12, -6, -9};
    cout << compute_closest_to_zero(temperatures) << endl; // Should output -3
    return 0;
}