#include <string>
#include <vector>
#include <stdexcept>

struct Person
{
    std::string name; // last name of the person
    unsigned int age; // age in years
};

// Returns the name of the person in the population that comes first in alphabetical order
std::string firstAlphabeticalName(const std::vector<Person>& people)
{
    // Check that the input vector is not empty
    if (people.empty()) {
        throw std::invalid_argument("The population is empty.");
    }

    // Initialize with the first person's name
    std::string first_name = people[0].name;

    // Compare all names to find the one alphabetically comes first
    for (const Person& person : people) {
        if (person.name < first_name) {
            first_name = person.name;
        }
    }

    return first_name;
}