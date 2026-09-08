## The `main()` Function in C++

### Purpose

`main()` is the entry point of a C++ program.

Execution starts from `main()`.

---

### Basic Form

```cpp
int main()
{
    return 0;
}
```

- Returns an integer to the operating system.
- `0` usually means success.


### With Command-Line Arguments

```cpp
int main(int argc, char* argv[])
{
    return 0;
}
```

#### Parameters

| Parameter | Meaning |
|------------|---------|
| `argc` | Number of arguments |
| `argv` | Array of argument strings |


```bash
$ ./main_example
Welcome to Robotics Bootcamp!
Arguments passed to the program:
0: ./main_example
```

Try running it with some command line arguments.

```bash
$ ./main_example arg1 test1 6
Welcome to Robotics Bootcamp!
Arguments passed to the program:
0: ./main_example
1: arg1
2: test1
3: 6
```


### Example

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello, World!";
    return 0;
}
```


### Rules

- Only one `main()` per program.
- Execution begins at `main()`.
- `main()` should return `int`.
- `return 0;` indicates successful execution.

---

### Common Forms

```cpp
int main()
```

```cpp
int main(int argc, char* argv[])
```

### Quick Summary

```text
Program Starts
      ↓
    main()
      ↓
 Execute Code
      ↓
 return 0
      ↓
Program Ends
```