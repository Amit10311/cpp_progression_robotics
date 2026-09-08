# 11. Advanced Object-Oriented Programming (OOP)

## Quick Summary

| Concept | Use When |
|----------|----------|
| Inheritance | A class derives properties/behavior from another class |
| Base Class | Parent class |
| Derived Class | Child class that inherits from base |
| Virtual Function | Enable runtime polymorphism, allowing a derived class to override a base-class function. |
| Override | Replace base class implementation |
| Abstract Class | Define a common interface |
| Pure Virtual Function | Force derived classes to implement a function |
| Getter | Read private data |
| Setter | Modify private data safely |
| Static Method | Call a class function without creating an object |
| Virtual Function | Allow derived classes to override behavior |
| `this` Pointer | Refer to the current object |
| Pointer Operator (`->`) | Access members through an object pointer |
| Polymorphism | One interface, many implementations |

## Comparison (Imp)

| Feature | Inheritance | Polymorphism |
|----------|-------------|--------------|
| Purpose | Code reuse | One interface, many implementations |
| Keyword | `:` | `virtual` |
| Example | `class Dog : public Animal` | `animal->speak();` |

## 1. Inheritance

**Definition**

* Allows one class to inherit data and functions from another class.

### Syntax

```cpp
class Child : public Parent
{
};
```

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

class SmartRobot : public Robot
{
};
```

```cpp
SmartRobot r;
r.move();
```

### Notes

- Promotes code reuse.
- Derived class inherits public and protected members.

## 2. Base Class and Derived Class

**Definition**

* Base class provides common functionality.
* Derived class extends the base class.

**Example**

```cpp
class Robot
{
public:
    void move() {}
};

class FlyingRobot : public Robot
{
public:
    void fly() {}
};
```

### Notes

- Parent = Base Class
- Child = Derived Class

## 3. Virtual Function

**Definition**

* Allows a derived class to provide its own implementation.

### Syntax

```cpp
virtual void speak();
```

**Example**

```cpp
class Robot
{
public:
    virtual void speak()
    {
        cout << "Robot";
    }
};

class SmartRobot : public Robot
{
public:
    void speak()
    {
        cout << "Smart Robot";
    }
};
```

### Notes

- Enables runtime polymorphism.
- Use `virtual` in the base class.

## 4. Override

**Definition**

* Replaces a virtual function from the base class.

**Example**

```cpp
class Robot
{
public:
    virtual void speak()
    {
        cout << "Robot";
    }
};

class SmartRobot : public Robot
{
public:
    void speak() override
    {
        cout << "Smart Robot";
    }
};
```

### Notes

- `override` is optional but recommended.
- Helps detect mistakes.

## 5. Abstract Class

**Definition**

* A class that cannot be instantiated.

### Example

```cpp
class Robot
{
public:
    virtual void move() = 0;
};
```

```cpp
Robot r; // Error
```

### Notes

- Used as a base class.
- Contains at least one pure virtual function.

## 6. Pure Virtual Function

**Definition**

* A virtual function with no implementation.

### Syntax

```cpp
virtual void move() = 0;
```

**Example**

```cpp
class Robot
{
public:
    virtual void move() = 0;
};

class WheeledRobot : public Robot
{
public:
    void move() override
    {
        cout << "Rolling";
    }
};
```

### Notes

- Forces derived classes to implement the function.

## 7. Getters and Setters

**Definition**

* Getter: Returns the value of a private member.
* Setter: Updates the value of a private member.

**Example**

```cpp
class Robot
{
private:
    int speed_;

public:
    void setSpeed(int speed)
    {
        speed_ = speed;
    }

    int getSpeed()
    {
        return speed_;
    }
};
```

### Notes

- Supports encapsulation.
- Controls access to private data.

---

## 8. Static Methods

**Definition**

* A function that belongs to the class instead of an object.

### Syntax

```cpp
static void functionName();
```

**Example**

```cpp
class Robot
{
public:
    static void info()
    {
        cout << "Robot Class";
    }
};
```

```cpp
Robot::info();
```

### Notes

- No object required.
- Can access only static members.

---

## 9. Virtual Functions

**Definition**

* Allows a derived class to replace the implementation of a base class function.

**Example**

```cpp
class Robot
{
public:
    virtual void move()
    {
        cout << "Robot Moving";
    }
};

class WheeledRobot : public Robot
{
public:
    void move() override
    {
        cout << "Rolling";
    }
};
```

### Notes

- Enables runtime polymorphism.
- Declare in the base class using `virtual`.

---

## 10. `this` Pointer

**Definition**

* A pointer to the current object.

**Example**

```cpp
class Robot
{
private:
    string name_;

public:
    void setName(string name)
    {
        this->name_ = name;
    }
};
```

### Notes

- `this` points to the current object.
- Used to distinguish member variables from parameters.

---

## 11. Pointer Operators

### Common Operators

| Operator | Meaning |
|----------|---------|
| `&` | Address-of |
| `*` | Dereference |
| `->` | Access member through pointer |

**Example**

```cpp
Robot robot;

Robot* ptr = &robot;

ptr->move();
```

Equivalent to:

```cpp
robot.move();
```

### Notes

- `->` combines dereference (`*`) and member access (`.`).

---

## 12. Polymorphism

**Definition**

* One interface, multiple implementations.

**Example**

```cpp
Robot* robot = new WheeledRobot();

robot->move();
```

**Output**

```text
Rolling
```

### Notes

- Requires virtual functions.
- Function called depends on the actual object, not the pointer type.

---

## Memory Tricks

```text
Getter
    → Read data

Setter
    → Modify data

Static Method
    → Class function

this
    → Current object

.
    → Object member

->
    → Pointer member

Virtual
    → Dynamic dispatch

Polymorphism
    → One interface, many implementations
```