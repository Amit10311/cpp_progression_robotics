#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <atomic>
#include <string>

std::mutex mtx;
std::condition_variable cv;

std::queue<std::string> sensorQueue;
//std::queue<data_type> variable_name;

std::atomic<bool> running{true};
// std::atomic<data_type> variable_name{initial_value};

// Producer: sensor thread
void sensorTask(const std::string& sensorName, int duration)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    {
        std::lock_guard<std::mutex> lock(mtx);
        sensorQueue.push(sensorName);
    }
    cv.notify_one();
    std::cout << "Sensor data produced: " << sensorName << std::endl;
}

// Consumer: processing thread
void controlTask()
{
    while (running)
    {
        std::unique_lock<std::mutex> lock(mtx);

        // Wait until data is available or shutdown is requested
        cv.wait(lock, [] {
            return !sensorQueue.empty() || !running;
        });

        if (!running && sensorQueue.empty())
            break;

        std::string sensorData = sensorQueue.front();
        sensorQueue.pop();

        // Mutex is released while processing
        lock.unlock();

        std::cout << "Processing: " << sensorData << std::endl;
    }
}

int main()
{
    std::cout << "Main thread started\n";

    // Create threads
    std::thread sensorThread1(sensorTask, "TemperatureSensor", 2);
    std::thread sensorThread2(sensorTask, "HumiditySensor", 3);

    std::thread controlThread(controlTask);

    // Wait for sensor threads
    sensorThread1.join();
    sensorThread2.join();

    // Tell consumer to stop
    running = false;
    cv.notify_one();

    // Wait for consumer
    controlThread.join();

    std::cout << "Main thread completed\n";

    return 0;
}