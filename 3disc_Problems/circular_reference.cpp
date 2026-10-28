#include <iostream>
#include <memory>
#include <string>

// Each node stores a pointer to the next node.
// A circular link is intentionally created below to demonstrate
// how shared_ptr handles reference cycles.
struct Node
{
    std::string name;
    std::shared_ptr<Node> next;

    ~Node() // Destructor to show when a node is destroyed
    {
        std::cout << "~" << name << ' ';
    }
};

int main()
{
    // Create two nodes.
    std::shared_ptr<Node> a = std::make_shared<Node>();
    std::shared_ptr<Node> b = std::make_shared<Node>();

    a->name = "a";
    b->name = "b";

    // Create a cycle: a -> b -> a.
    a->next = b;
    b->next = a;

    // The cycle keeps both nodes alive, so use_count is 2 for 'a'.
    std::cout << "a.use_count=" << a.use_count() << '\n';
    std::cout << "leaving main\n";

    return 0;
}

/**
  Output
  a.use_count=2
  leaving main
*/