#include <iostream>
#include <vector>

using namespace std;

class Answer
{
public:
    static bool exists(int ints[], int size, int k)
    {
        int left = 0;
        int right = size - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (ints[mid] == k) {
                return true;
            } else if (ints[mid] < k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    int ints[] = {-9, 14, 37, 102};
    cout << Answer::exists(ints, 4, 102) << endl; // 1
    cout << Answer::exists(ints, 4, 36) << endl;  // 0
    return 0;
}