# Arrays, Vectors, and Strings

## Quick Summary

| Container  | Use When                 |
|------------|--------------------------|
| Array      | Fixed number of elements |
| Vector     | Dynamic collection       |
| String     | Text data                |

## Comparison (Imp)

| Feature                          | Array    | Vector       | String                |
|----------------------------------|----------|--------------|-----------------------|
| Stores                           | Any type | Any type     | Characters            |
| Resizable                        | x        | ✅            | ✅                    |
| Standard Library(STL) Support    | Limited  | Extensive    | Extensive             |
| Size Function                    | Manual   | `size()`     | `length()` / `size()` |

## 1. Arrays

**Definition**

* A fixed-size collection of elements of the same type.
* Arrays are data structure - store and manipulate multiple values of the same type.

**Syntax**

```cpp
int numbers[5];
```

**Example**

```cpp
int numbers[5] = {10, 20, 30, 40, 50};

cout << numbers[0];

```

### Common Operations

| Operation  | Example                                |
|------------|--------------------------------------- |
| Access     | `arr[0]`                           |
| Modify     | `arr[1] = value;`                     |
| Size       | `sizeof(arr) / sizeof(arr[0])` |

### Notes

* Size is fixed after creation.
* Stored in contiguous memory.
* Index starts at `0`.

## 2. Vectors

**Definition**

* A dynamic array provided by the STL(Standard Library).

**Header**

```cpp
#include <vector>
```

**Syntax**

```cpp
vector<int> numbers;
```

**Example**

```cpp
vector<int> numbers = {10, 20, 30};

numbers.push_back(40);

cout << numbers[0];
```

### Common Operations

| Operation   | Example               |
|------------ |-----------------------|
| Add element | `v.push_back(10);`    |
| Remove last | `v.pop_back();`       |
| Access      | `v[0]`                |
| Size        | `v.size()`            |
| Check empty | `v.empty()`           |

### Notes

* Size can grow or shrink.
* Safer and more flexible than arrays.

## 3. Strings

**Definition**

* A sequence of characters.

**Header**

```cpp
#include <string>
```

**Syntax**

```cpp
string name;

string name = "Robot";

cout << name;
```

### Common Operations

| Operation | Example           |
|-----------|-------------------|
| Length    | `s.length()`      |
| Size      | `s.size()`        |
| Access    | `s[i]`            |
| Append    | `s += "abc"`      |
| Input     | `getline(cin, s)` |

* `size()` - comes from STL containers (vector, string, etc.).
* `length()` - was added because it sounds more natural for text.

**Example**

```cpp
string first = "Hello";
string second = " World";

cout << first + second;
```

Reference : <https://automaticaddison.com/how-to-use-arrays-vectors-and-strings-in-c/>
