# 1. Declaration & Definition

## Table of Contents
1. [Definition](#11-definition)
2. [Declaration](#12-declaration)
3. [Types of Declaration](#13-types-of-declaration)
   - [Variable Declaration](#a-variable-declaration)
   - [Function Declaration (Prototype)](#b-function-declaration-prototype)
   - [Class Declaration](#c-class-declaration)

## 1.1 Definition

A **definition** creates the entity and allocates memory (for variables) or provides the complete implementation (for functions).

```cpp
int age = 20;   // Definition
```

Memory is allocated for `age`.


## 1.2. Declaration

A **declaration** tells the compiler that an entity exists without creating it.

```cpp
extern int age;   // Declaration
```

No memory is allocated here.


## 1.3. Types of Declaration

#### a) Variable Declaration

```cpp
int x;
```

Declares (and also defines) a variable.


#### b) Function Declaration (Prototype)

```cpp
int add(int, int);
```

Tells the compiler a function exists.



#### c) Class Declaration

```cpp
class Student;
```

Forward declaration of a class.

---

### Goto Reference

**Go to Definition** → Takes you to where something is implemented/created.

```cpp
int add(int a, int b)
{
    return a + b;
}
```

`F12` on `add()` → jumps here.


**Go to Declaration** → Takes you to where something is first declared.

```cpp
int add(int, int);   // Declaration
```

`Ctrl + F12` on `add()` → jumps here.

---

### Example

```cpp
#include <iostream>
using namespace std;

int add(int, int);      // Declaration

int main()
{
    cout << add(2, 3);
}

int add(int a, int b)   // Definition
{
    return a + b;
}
```

| Item              | Code                                    |
| ----------------- | --------------------------------------- |
| Declaration       | `int add(int, int);`                    |
| Definition        | `int add(int a, int b) { return a+b; }` |
| Go to Declaration | Jumps to prototype                      |
| Go to Definition  | Jumps to function body                  |

## 1.4. Types of Functions

Here are the **key differences** between **Pass by Value**, **Pass by Reference**, and **Pass by Const Reference**:

| **Aspect**             | **Pass by Value**                     | **Pass by Reference**                | **Pass by Const Reference**          |
|-------------------------|--------------------------------------|---------------------------------------|---------------------------------------|
| **What is passed?**     | A copy of the value.                 | A reference to the original variable. | A reference to the original variable (read-only). |
| **Memory Usage**        | Creates a new copy in memory.     | Uses the same memory as the original variable. | Uses the same memory as the original variable. |
| **Effect on Original**  | Original variable is not modified.   | Original variable can be modified.    | Original variable cannot be modified. |
| **Performance**         | Slower for large objects (due to copying). | Faster as no copy is made.            | Faster as no copy is made.            |
| **Use Case**            | When the function does not need to modify the variable and copying is acceptable. | When the function needs to modify the variable. | When the function does not need to modify the variable, and copying is expensive. |
| **Safety**              | Safe, as the original variable is unaffected. | Risky, as the original variable can be unintentionally modified. | Safe, as the original variable is protected from modification. |

### Summary:
- **Pass by Value**: Use when you don't want the function to affect the original variable and copying is not a concern.
- **Pass by Reference**: Use when you want the function to modify the original variable.
- **Pass by Const Reference**: Use when you want to avoid copying large objects but ensure the function cannot modify the original variable.

```cpp
void byValue(int x)
{
    x = 10;   // original unchanged
}

void byReference(int& x)
{
    x = 10;   // original changed
}

void byConstReference(const std::vector<int>& data)
{
    // data cannot be modified
}
```