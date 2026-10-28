// This is called runtime polymorphism.

#include <iostream>
using namespace std;

class Animal { // Base class for all animals
public:
    virtual void sound() const {  // Virtual function for making a sound
        cout << "Some animal sound\n";
    }
};

class Dog : public Animal { // Derived class for dogs
public:
    void sound() const override {  // Override function for making a dog sound
        cout << "Woof!\n";
    }
};

class Cat : public Animal { // Derived class for cats
public:
    void sound() const override {  // Override function for making a cat sound
        cout << "Meow!\n";
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound(); // calls Dog::sound()
    a2->sound(); // calls Cat::sound()

    delete a1;
    delete a2;
}

/* Output:
    Woof!
    Meow!
*/