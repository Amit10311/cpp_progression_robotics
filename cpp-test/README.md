## C++ Test

#### Question 1

The goal of this exercise is to check whether a number exists in an array.

Specifications:

- The elements are integers sorted from smallest to largest.
- The array can contain up to 1 million elements.
- The array is never `NULL`.

Implement the method `bool Answer::exists(int ints[], int size, int k)` so that it returns `true` if `k` is present in `ints`;
- otherwise, it must return `false`. `size` contains the length of `ints`.

Important: Try to prioritize execution speed.

**Example:**

```cpp
int ints[] = {-9, 14, 37, 102};

Answer::exists(ints, 4, 102); // returns true
Answer::exists(ints, 4, 36);  // returns false
```

#### Question 2: Compute Closest to Zero

Implement the function `int compute_closest_to_zero(vector<int> ts)` which takes an array of temperatures `ts` as a parameter and returns the temperature closest to zero.

Constraints:

- `n` contains the size of the array.
- If the array is empty, the function must return `0`.
- (0 $\leq \text{size}(ts) \leq$ 10000)
- If two temperatures are equally close to zero, the function must return the positive temperature (for example, if the temperatures are `-5` and `5`, return `5`).

**Example**

```bash
Input: [-5, 5, -2, 8]

Output: -2
```

#### Question 3:

```cpp
typedef struct {
    int a;
    int b;
} MyStruct;

MyStruct *ps = new MyStruct();
```

- To access variable `a` through pointer `ps`, write:

```cpp
ps->a
```

#### Question 4: What does this program print?

```cpp
int a()
{
    cout << "a";
    return 0;
}

int b()
{
    cout << "b";
    return 0;
}

int main()
{
    if (a() || b()) {
        cout << "main";
    }

    return 0;
}
```