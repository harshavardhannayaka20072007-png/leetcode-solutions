# 02. Reverse a String

**Difficulty:** Easy  
**Category:** Arrays & Strings  
**LeetCode:** https://leetcode.com/problems/reverse-string/

## Problem

Write a function that reverses a string in place.

## Approach

Use two pointers: one at the start and one at the end of the array. Swap the characters until the pointers meet in the middle.

## Example

Input:
```text
s = ["h", "e", "l", "l", "o"]
```

Output:
```text
["o", "l", "l", "e", "h"]
```

## Complexity

- Time: O(n)
- Space: O(1)

## Solution File

- [02-reverse-a-string.c](02-reverse-a-string.c)
