# Valid Parentheses

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

This program checks whether a string of parentheses is valid.

## Problem Overview

A string is valid if every opening bracket has a matching closing bracket in the correct order.

Examples:

- `()[]{} ` → valid
- `(]` → invalid

## How the Program Works

1. The program scans the string from left to right.
2. When it sees an opening bracket, it pushes it onto a stack.
3. When it sees a closing bracket, it pops the last opening bracket and checks whether they match.
4. If the stack is empty at the wrong time, or the brackets do not match, the string is invalid.
5. At the end, the string is valid only if the stack is empty.

## Example

```text
s1: valid
s2: invalid
```

## Time Complexity

- `O(n)`

## Space Complexity

- `O(n)` in the worst case

## Compile and Run

```bash
gcc 08-valid-parentheses.c -o 08-valid-parentheses
./08-valid-parentheses
```
