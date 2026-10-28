#include <string>
#include <vector>
#include <stdexcept>
#include <cmath>
#include <utility>

struct Person
{
    std::string name; // last name of the person
    unsigned int age; // age in years
};
// Returns the mean age and the standard deviation of ages
std::pair<double, double> meanAndStandardDeviation(const std::vector<Person>& people)
{
    // Check that the population is not empty
    if (people.empty()) {
        throw std::invalid_argument("The population is empty.");
    }

    // Compute the sum of ages
    double sum = 0.0;
    for (const Person& person : people) {
        sum += person.age;
    }

    // Compute the mean age
    double mean = sum / people.size();

    // Compute the sum of squared differences from the mean
    double squared_sum = 0.0;
    for (const Person& person : people) {
        double difference = person.age - mean;
        squared_sum += difference * difference;
    }

    // Compute the standard deviation
    double standard_deviation = std::sqrt(squared_sum / people.size());

    return std::make_pair(mean, standard_deviation);
}