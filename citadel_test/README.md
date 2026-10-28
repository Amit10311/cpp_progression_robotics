## C++ Test

#### Question 1 :  FizzBuzz

You are given an integer n.

- For every integer i from 1 to n, print:
- FizzBuzz if i is divisible by both 3 and 5
- Fizz if i is divisible by 3 only
- Buzz if i is divisible by 5 only
- Otherwise, print i

Print one result per line.

## Example

Suppose n = 15.

Output:

```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

## Explanation

The numbers 3, 6, 9, and 12 are multiples of 3 (but not 5), so print Fizz on those lines.

The numbers 5 and 10 are multiples of 5 (but not 3), so print Buzz on those lines.

The number 15 is a multiple of both 3 and 5, so print FizzBuzz on that line.

None of the other values is a multiple of either 3 or 5, so print the values of i on those lines.

## Constraints

- $(0 < n \leq 2 \times 10^5)$