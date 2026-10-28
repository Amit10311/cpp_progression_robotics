#include <iostream>
#include <memory>

// A simple member used to show destructor order.
struct Buffer
{
    ~Buffer()
    {
        std::cout << "~Buffer ";
    }
};

// Base destructor is virtual so deleting a Derived object through a Base* calls the correct derived destructor first.
struct Base
{
    virtual ~Base()
    {
        std::cout << "~Base ";
    }
};

struct Derived : Base
{
    Buffer buf;

    ~Derived()
    {
        std::cout << "~Derived ";
    }
};

int main()
{
    // Raw pointer deletion should still call the correct destructor chain.
    Base* p = new Derived();
    delete p;
    std::cout << "| ";

    // Smart pointer cleanup does the same automatically.
    std::shared_ptr<Base> sp = std::make_shared<Derived>();
    sp.reset();
    std::cout << "\n";

    return 0;
}

/**
  Output
  ~Derived ~Buffer ~Base | ~Derived ~Buffer ~Base
*/