#include <iostream>
#include <thread>
#include <vector>

void processPoints(std::vector<float>& points, int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        points[i] *= 2.0f;
    }
}

int main()
{
    std::vector<float> points(1000000);

    std::thread t1(processPoints, std::ref(points), 0, 250000);
    std::thread t2(processPoints, std::ref(points), 250000, 500000);
    std::thread t3(processPoints, std::ref(points), 500000, 750000);
    std::thread t4(processPoints, std::ref(points), 750000, 1000000);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    std::cout << "Main thread completed\n";

}