# 7. Operators & Control Flow

**Quick Summary**

```text
Operators
├─ Arithmetic
├─ Assignment
├─ Comparison
├─ Logical
└─ Increment/Decrement

Control Flow
├─ if
├─ if-else
├─ switch
├─ while
├─ for
├─ break
└─ continue
```

## 1. Operators

| Name       | Expression                | Example                       |
|------------|---------------------------|-------------------------------|
| Arithmetic | `+  -  *  /  %`           | `int sum = a + b;`            |
| Assignment | `=  +=  -=  *=  /=  %=`   | `x += 5;`                     |
| Comparison | `==  !=  <  >  <=  >=`    | `if (a == b)`                 |
| Logical    | `&&  \|\|  !`             | `if (age >= 18 && age <= 60)` |
| Increment  | `++x`, `x++`              | `++count;`                    |
| Decrement  | `--x`, `x--`              | `count--;`                    |

### Notes

| Operator Type | Result            |
|---------------|-------------------|
| Comparison    | `true` or `false` |
| Logical       | `true` or `false` |


## 2.Control Flow

| Statement        | Syntax                                 | Purpose                             |
|------------------|----------------------------------------|-------------------------------------|
| `if`             | `if (condition) {}`                    | Execute code when condition is true |
| `if-else`        | `if (condition) {} else {}`            | Choose between two paths            |
| `else-if` Ladder | `if (...) {} else if (...) {} else {}` | Check multiple conditions           |
| `switch`         | `switch(value) { case ... }`           | Multiple fixed choices              |
| `while`          | `while (condition) {}`                 | Repeat while condition is true      |
| `for`            | `for (init; condition; update) {}`     | Repeat known number of times        |
| `break`          | `break;`                               | Exit loop or switch                 |
| `continue`       | `continue;`                            | Skip current iteration              |

### 2.1 if

```cpp
if (condition)
{
    // code
}
```

### 2.2 if-else

```cpp
if (condition){
    // code
}
else{
    // code
}
```


### 2.3  else-if Ladder

```cpp
if (...)
{
  ...
}
else if (...)
{
  ...
}
else{
  ...
}
```


### 2.4 switch

```cpp
switch (value)
{
    case 1:
        break;

    default:
        break;
}
```

Use for multiple fixed choices.


### 2.4 while Loop

```cpp
while (condition)
{
    // code
}
```

Repeats while condition is true.


### 2.5 for Loop

```cpp
for (int i = 0; i < n; ++i)
{
  ...
}
```

Best when iteration count is known.


### 2.6 break

```cpp
if (x == 0)
  break;
```

Exit loop or switch.

### 2.7 continue

```cpp
if (i == 3)
  continue; // Skip the current iteration when i equals 3
```

Skip current iteration.
