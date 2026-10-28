/* Demonstrates the importance of a virtual destructor in base classes for proper cleanup of derived objects.

With a virtual destructor, C++ resolves the correct destructor at runtime, so it calls:
  Derived::~Derived()
  Base::~Base()
This is the safe order because destructors run in reverse order of construction.
*/

#include <iostream>
#include <memory>
using namespace std;

class Base {
public:
    virtual ~Base() { // Virtual destructor for proper cleanup of derived objects
        cout << "~Base destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() override { // Override destructor for proper cleanup of derived objects
        cout << "~Derived destructor\n";
    }
};

int main() {
    Base* p = new Derived();
    delete p;   // Calls Derived::~Derived() then Base::~Base()

    // Using shared_ptr for automatic memory management C++17
    shared_ptr<Base> q = make_shared<Derived>();
    q.reset();   // Calls Derived::~Derived() then Base::~Base()

}

/* Output:
    ~Derived destructor
    ~Base destructor
*/