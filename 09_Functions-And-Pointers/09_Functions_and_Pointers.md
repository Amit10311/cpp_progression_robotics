# Functions and Pointers

## Quick Summary

| Concept           | Use When                       |
|-------------------|--------------------------------|
| Function          | Reuse code                     |
| Parameter         | Pass data to a function        |
| Return Value      | Send data back from a function |
| Pointer           | Store a memory address         |
| Dereference (`*`) | Access value through pointer   |
| Address-of (`&`)  | Get variable address           |

## Comparison (Imp)

| Feature | Function | Pointer |
|----------|----------|----------|
| Purpose | Reuse code | Store memory address |
| Syntax | `int add()` | `int* ptr` |
| Returns value | ✅ | ❌ |
| Stores address | ❌ | ✅ |


## 1. Functions

**Definition**

* A named block of reusable code.

### Syntax

```cpp
return_type function_name(parameters)
{
    // code
}
```

**Example**

```cpp
int add(int a, int b)
{
    return a + b;
}
```

```cpp
cout << add(2, 3);
```

### Common Components

| Component        | Example          |
|------------------|------------------|
| Return Type      | `int`            |
| Function Name    | `add`            |
| Parameters       | `(int a, int b)` |
| Return Statement | `return a + b;`  |

### Notes

* Improves code reuse.
* Makes programs easier to maintain.
* Can accept parameters and return values.

## 2. Function Declaration vs Definition

### 2.1 Declaration (Prototype)

```cpp
int add(int, int);
```

### 2.2 Definition

```cpp
int add(int a, int b)
{
    return a + b;
}
```

### Notes

* Declaration tells the compiler the function exists.
* Definition provides the implementation.

## 3. Pointers

**Definition**

* A variable that stores the address of another variable.

### Syntax

```cpp
int* ptr;
```

**Example**

```cpp
int num = 10;
int *ptr = &num;
```

### Common Operations

| Operation | Example |
|------------|---------|
| Get Address | `&num` |
| Store Address | `int* ptr = &num;` |
| Dereference | `*ptr` |

### Notes

- Pointer stores an address.
- `*` accesses the value at that address.
- `&` gets the address of a variable.

---

## 4. Dereferencing

**Example**

```cpp
int num = 10;
int* ptr = &num;

cout << *ptr;
```

Output:

```text
10
```

### Notes

- `ptr` → address
- `*ptr` → value at address


## 5. Null Pointer

### Syntax

```cpp
int* ptr = nullptr;
```

### Notes

- Points to nothing.
- Safer than using an uninitialized pointer.

### Pointer Symbols

| Symbol | Meaning | Example |
|----------|---------|---------|
| `&` | Address-of | `&num` |
| `*` | Dereference | `*ptr` |
| `nullptr` | No valid address | `int* ptr = nullptr;` |

### 1. Print the pointer itself

```cpp
int* ptr = nullptr;

std::cout << ptr << std::endl;
```
**❌ Don't do this**
```
std::cout << *ptr << std::endl;
```
* Because `ptr` is null and dereferencing it causes undefined behavior, typically a crash.


### Reference

<https://automaticaddison.com/how-to-use-functions-and-pointers-in-c/>