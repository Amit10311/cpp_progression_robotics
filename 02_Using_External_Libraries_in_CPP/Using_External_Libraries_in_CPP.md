## Using External Libraries in C++

### 1. Install the Library

Example (Eigen):

```bash
sudo apt install libeigen3-dev
```

### 2. Include the Header

```cpp
#include <eigen3/Eigen/Dense>
```

### 3. Use the Library

```cpp
Eigen::Vector3d v(1, 2, 3);
```

### 4. Compile

```bash
g++ main.cpp -o main
```

Some libraries may require extra linker flags:

```bash
g++ main.cpp -o main -lmylib
```

## Key Concepts

### Header Files
Used by the compiler.

```cpp
#include <library/header.hpp>
```

### Libraries
Used by the linker.

- Static: `.a`, `.lib`
- Shared/Dynamic: `.so`, `.dll`

**Two Things Every External Library Needs**

1. Header path (Include Path)
2. Library path (Linker Path)

**Typical Workflow**

```text
Install Library
      ↓
Include Header
      ↓
Compile
      ↓
Link Library
      ↓
Run Program
```

### Example

```cpp
#include <iostream>
#include <eigen3/Eigen/Dense>

int main()
{
    Eigen::Vector3d v(1, 2, 3);
    std::cout << v.transpose();
}
```
