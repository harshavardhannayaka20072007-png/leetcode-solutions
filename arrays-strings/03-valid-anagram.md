# Valid Anagram

**LeetCode:** https://leetcode.com/problems/valid-anagram/

This program checks whether two input strings are anagrams of each other.

## Problem Overview

Two strings are anagrams if they contain the same characters in the same frequencies, but possibly in different orders.

Example:

- `listen` and `silent` are anagrams
- `hello` and `world` are not

## How the Program Works

1. The program reads two strings from the user.
2. It removes the newline characters from both inputs.
3. It compares the lengths first. If they are different, the strings cannot be anagrams.
4. It uses a frequency array to count characters in the first string.
5. It subtracts the counts of the second string.
6. If all values in the frequency array are zero, the strings are anagrams.

## Example

Input:

```text
Enter first string: listen
Enter second string: silent
```

Output:

```text
Anagram.
```

## Time Complexity

- `O(n)`

## Space Complexity

- `O(1)` for the fixed-size frequency array (assuming ASCII characters)

## Compile and Run

```bash
gcc 03-valid-anagram.c -o 03-valid-anagram
./03-valid-anagram
```
