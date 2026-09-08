# 10. Object-Oriented Programming (OOP) Basics

## Quick Summary

| Concept          | Use When                  |
|------------------|---------------------------|
| Class            | Define a custom type      |
| Object           | Create an instance of a class |
| Member Variable  | Store object data         |
| Member Function  | Define object behavior    |
| Constructor      | Initialize an object      |
| Access Specifier | Control access to members |

## Comparison (Imp)

| Feature          | Class         | Object      |
|------------------|---------------|-------------|
| Purpose          | Blueprint     | Instance    |
| Memory Allocated | ❌             | ✅          |
| Example          | `class Robot` | `Robot r1;` |

## 1. Class

**Definition**

* A blueprint for creating objects.

### Syntax

```cpp
class Robot
{
public:
    string name;
};
```
### Notes

- Defines data and behavior.
- Does not allocate memory.

### Common Components

| Component        | Example        |
|------------------|----------------|
| Class Name       | `Robot`        |
| Data Member      | `string name;` |
| Member Function  | `void move();` |
| Access Specifier | `public:`      |

## 2. Object

**Definition**

* An instance of a class.

### Syntax

```cpp
Robot r1;
```

**Example**

```cpp
Robot r1;
```

### Notes

- Memory is allocated for objects.
- Multiple objects can be created from one class.

## 3. Member Variables

**Definition**

* Variables declared inside a class.

**Example**

```cpp
class Robot
{
public:
    string name;
    int speed;
};
```

### Notes

- Store object data.
- Each object has its own copy.

## 4. Member Functions

**Definition**

* Functions declared inside a class.

**Example**

```cpp
class Robot
{
public:
    void move()
    {
        cout << "Moving";
    }
};
```

### Notes

* Define object behavior.
* Can access member variables.
* Method = Member Function attached to a class.

## 5. Constructor

**Definition**

* A special function automatically called when an object is created.

### Syntax

```cpp
ClassName()
{
}
```

**Example**

```cpp
class Robot
{
public:
    Robot()
    {
        cout << "Robot Created";
    }
};
```

### Notes

* Same name as the class.
* No return type.
* Used for initialization.


Without constructor:

```shell
Create Car
↓
Remember to install engine
↓
Remember to add fuel
↓
Easy to forget
```
With constructor:

```shell
Create Car
↓
Engine + Fuel installed automatically
↓
Ready to use
```

```cpp
class DistanceSensor
{
public:
    double range;
};

int main()
{
    DistanceSensor sensor;

    std::cout << sensor.range; // garbage value
}
```

With Constructor

```cpp
class DistanceSensor
{
public:
    double range;

    DistanceSensor() : range(0.0) {}
};

int main()
{
    DistanceSensor sensor;

    std::cout << sensor.range; // 0.0
}
```


## 6. Access Specifiers

**Definition**

* Control access to class members.

### Common Types

| Specifier   | Access                             |
|-------------|------------------------------------|
| `public`    | Accessible everywhere              |
| `private`   | Accessible only inside class       |
| `protected` | Accessible inside the class and derived classes |


**Memory Trick**
```bash
private
    = Only me

protected
    = Me + my children

public
    = Everyone
```

**Example**

```cpp
class Robot
{
private:
    int speed;

public:
    string name;
};
```

### Notes

* Helps achieve encapsulation.
* Prefer keeping internal data private.

## Complete Example

```cpp
#include <iostream>
using namespace std;

class Robot
{
public:
    string name;

    Robot()
    {
        name = "Robo";
    }

    void speak()
    {
        cout << name;
    }
};

int main()
{
    Robot r1;
    r1.speak();
}
```

## OOP Structure

```text
Class
 ├─ Data Members
 ├─ Member Functions
 └─ Constructor
        ↓
      Object
```

## 7. Static Keyword

**Definition**

* `static` makes a variable or function belong to the class itself rather than an object.
* A static local variable retains its value between function calls.

### Types

| Type | Purpose |
|--------|---------|
| Static Variable | Retains value between function calls |
| Static Member Variable | Shared by all objects |
| Static Member Function | Called using the class name |

### Static Variable Example

```cpp
void counter()
{
    static int count = 0;

    count++;

    cout << count << '\n';
}

int main()
{
    counter();
    counter();
    counter();
}
```

**Output**

```text
1
2
3
```

Without `static`:

```text
1
1
1
```

### Static Member Variable

**Example**

```cpp
class Robot
{
public:
    static int total_robots;

    Robot()
    {
        total_robots++;
    }
};

int Robot::total_robots = 0;
```

```cpp
Robot r1;
Robot r2;
Robot r3;

cout << Robot::total_robots;
```

**Output**

```text
3
```

### Why?

Normal member:

```cpp
class Robot
{
public:
    int count;
};
```

Each object gets its own copy:

```text
r1.count
r2.count
r3.count
```

Static member:

```cpp
static int total_robots;
```

Only one shared copy exists:

```text
Robot::total_robots
```

### Static Member Function

```bash
Normal member
┌────┐ ┌────┐ ┌────┐
│ r1 │ │ r2 │ │ r3 │
└─┬──┘ └─┬──┘ └─┬──┘
  │       │       │
 own     own     own
 copy    copy    copy

Static member
      Robot::total_robots
              │
      ┌───────┼───────┐
      │       │       │
     r1      r2      r3
```
## 8. Conditional Compilation (`#ifdef`)

**Definition**

* Compile different code based on whether a macro is defined.

### Syntax

```cpp
#ifdef TESTING
    // testing code
#else
    // normal code
#endif
```

### Example

#### Step 1: Change Access Specifier

```cpp
#ifdef TESTING
#define PRIVATE public
#else
#define PRIVATE private
#endif
```

```cpp
class Robot
{
PRIVATE:
    std::string name_;
    int x_;
    int y_;

public:
  Robot(string name, int x, int y) : name_(name), x_(x), y_(y){} // Constructor with default position

  void display();
};
```

#### Step 2: Compile Different Code

```cpp
#ifdef TESTING
cout << "Robot " << robot1.name_
     << " created at position ("
     << robot1.x_ << ", "
     << robot1.y_ << ")" << endl;
#else
robot1.display();
robot2.display();
#endif
```

### Behavior

| Build Mode | Result |
|------------|---------|
| Normal Build | `PRIVATE` becomes `private` |
| Testing Build | `PRIVATE` becomes `public` |
| Normal Build | Uses `display()` |
| Testing Build | Directly accesses members |

### Compile Commands

**Normal Build**

```bash
g++ conditional_preprocessor_directive.cpp -o robot
```

**Testing Build**

```bash
g++ -DTESTING conditional_preprocessor_directive.cpp -o robot_test
```

### Notes

- `#ifdef TESTING` checks if the macro `TESTING` exists.
- `-DTESTING` defines the macro during compilation.
- Useful for debugging and testing.
- Can expose private members temporarily.
- Code inside `#else` is ignored when `TESTING` is defined.

### Flow

```text
Compile
    │
    ▼
Is TESTING defined?
    │
 ┌──┴──┐
 │     │
Yes    No
 │     │
 ▼     ▼
Testing  Normal
Code     Code
```

### Reference

<https://automaticaddison.com/how-to-implement-object-oriented-programming-basics-in-c/>