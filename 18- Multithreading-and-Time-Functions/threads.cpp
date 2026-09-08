#include <iostream>
#include <thread>
#include <chrono>

void sensorTask(const std::string& sensorName, int duration) {
    std::cout << "Sensor task started: " << sensorName << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    std::cout << "Sensor task completed: " << sensorName << std::endl;
}

void controlTask(const std::string& controllerName, int duration) {
    std::cout << "Control task started: " << controllerName << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    std::cout << "Control task completed: " << controllerName << std::endl;
}

int main() {
    std::cout << "Main thread started" << std::endl;

    // Create threads for sensor tasks
    std::thread sensorThread1(sensorTask, "TemperatureSensor", 2);
    std::thread sensorThread2(sensorTask, "HumiditySensor", 3);

    // Create a thread for control task
    std::thread controlThread(controlTask, "MotionController", 4);

    // Wait for the threads to finish
    sensorThread1.join();
    sensorThread2.join();
    controlThread.join();

    std::cout << "Main thread completed" << std::endl;

    return 0;
}