# Reverse a String

**LeetCode:** https://leetcode.com/problems/reverse-string/

This program takes an input string from the user, reverses it, and prints the reversed result.

## Problem Overview

The goal is to reverse the characters in a string. For example:

- Input: `hello`
- Output: `olleh`

## How the Program Works

1. The program declares a character array named `str` to store the user input.
2. It reads the string using `fgets`, which safely reads a line from standard input.
3. It calculates the length of the string with `strlen`.
4. If the input ends with a newline character, it removes that newline so the string is clean.
5. It uses a two-pointer approach:
   - `i` starts at the beginning of the string
   - `j` starts at the end of the string
   - The program swaps characters at positions `i` and `j` until they meet in the middle.
6. Finally, it prints the reversed string.

## Example

Input:

```text
Enter a string: hello
```

Output:

```text
Reversed string: olleh
```

## Time Complexity

- The program loops through half of the string once.
- Time complexity: `O(n)`

## Space Complexity

- It uses a fixed-size array and a temporary variable for swapping.
- Space complexity: `O(1)` (ignoring the input storage)

## Compile and Run

```bash
gcc 02-reverse-a-string.c -o 02-reverse-a-string
./02-reverse-a-string
```

## Note

This version of the program uses `strlen`, so a standard C include for strings is recommended:

```c
#include <string.h>
```
