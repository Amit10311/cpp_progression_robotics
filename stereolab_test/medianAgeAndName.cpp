#include <algorithm>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

struct Person
{
  std::string name; // last name of the person
  unsigned int age; // age in years
};

// 3. Returns the median age in the population and the name of a person
// whose age is equal to the median age
std::pair<unsigned int, std::string> medianAgeAndName(const std::vector<Person>& people)
{
    // Check that the population is not empty
    if (people.empty()) {
        throw std::invalid_argument("The population is empty.");
    }

    // Copy only the ages to sort them
    std::vector<unsigned int> ages;
    for (const Person &person: people) {
        ages.push_back(person.age);
    }

    // Sort the ages in increasing order
    // Iterators
    std::sort(ages.begin(), ages.end());

    // Find the median age
    std::size_t median_index = ages.size() / 2;
    unsigned int median_age = ages[median_index];

    // Find the name of a person whose age is equal to the median age
    for (const Person& person : people) {
        if (person.age == median_age) {
            return std::make_pair(median_age, person.name);
        }
    }

    throw std::runtime_error("No person found with the median age.");
}