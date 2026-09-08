#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3};

    for (int x : v)
    {
        std::cout << x << ' ';

        if (x == 1)
            v.push_back(99);
    }

    std::cout << "| size=" << v.size() << '\n';

    return 0;
}


/**
  Output
  1 2 3 | size=4
*/