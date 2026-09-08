#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    // data_type array_name[size];

    vector<int> v = {4, 5, 6};
    // vector<data_type> vector_name;
    v.insert(v.begin(), 5);                     // add at start
    v.erase(v.begin() + 1);                     // remove the second element
    cout << "Vector size " << v.size() << endl; // number of elements

    cout << "Array: " << arr[1] << endl;
    cout << "Vector: " << v[1] << endl;

    list<int> numbers = {7, 8, 9};
    // list<data_type> list_name;

    numbers.push_back(40); // add at end
    numbers.push_front(5); // add at start
    numbers.remove(8);     // remove all elements with value 8
    numbers.pop_front();   // remove first element
    cout << "list size " << numbers.size() << endl; // number of elements

    for (int x : numbers)
    {
        cout << "List: " << x << endl;
    }

    return 0;
}