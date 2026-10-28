#include <iostream>
using namespace std;

int a()
{
    cout << "a";
    return 0;
}

int b()
{
    cout << "b";
    return 0;
}

int main()
{
    if (a() || b())
    {
        cout << "main";
    }

    return 0;
}