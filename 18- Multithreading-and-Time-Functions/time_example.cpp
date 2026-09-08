#include <iostream>
#include <chrono>
#include <thread>

int main() {
    // Record the starting time before doing any work
    auto start_time = std::chrono::steady_clock::now();

    // Pause the program for 2 seconds
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Record the time again after the pause
    auto end_time = std::chrono::steady_clock::now();
    // Calculate how much time passed
    std::chrono::duration<double> elapsed_seconds = end_time - start_time;

    // Display the elapsed time in seconds
    std::cout << "Elapsed time: " << elapsed_seconds.count() << " seconds\n";
    return 0;
}