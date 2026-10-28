#include <iostream>
#include <string>

class Animal {
public:
    virtual void sound() const = 0;

    // NOT virtual
    ~Animal() {
        std::cout << "Animal destroyed\n";
    }
};

class Dog : public Animal {
private:
    std::string* name;

public:
    Dog() : name(new std::string("Buddy")) {}

    void sound() const override {
        std::cout << *name << " says woof\n";
    }

    ~Dog() override {
        std::cout << "Dog destroyed\n";
        delete name;
    }
};

int main() {
    Animal* a = new Dog();
    delete a; // only Animal::~Animal() runs
}