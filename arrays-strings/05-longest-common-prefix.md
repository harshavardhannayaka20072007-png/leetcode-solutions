# Longest Common Prefix

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

This program finds the longest common prefix shared by a list of strings.

## Problem Overview

Given multiple strings, the program determines the longest prefix that appears at the beginning of all of them.

Example:

- `flower`, `flow`, `flight` → `fl`
- `dog`, `racecar`, `car` → `""` (empty string)

## How the Program Works

1. The program starts with the first string as the initial prefix.
2. It compares that prefix against each following string.
3. It shortens the prefix whenever a mismatch is found.
4. The final prefix is printed.

## Example

```text
Result 1: fl
Result 2: 
```

## Time Complexity

- `O(n * m)` where `n` is the number of strings and `m` is the length of the first string

## Space Complexity

- `O(1)` extra space, excluding the output buffer

## Compile and Run

```bash
gcc 05-longest-common-prefix.c -o 05-longest-common-prefix
./05-longest-common-prefix
```
