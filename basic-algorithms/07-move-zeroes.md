# 07. Move Zeroes

**Difficulty:** Easy  
**Category:** Basic Algorithms  
**LeetCode:** https://leetcode.com/problems/move-zeroes/

## Problem

Move all zero values to the end of the array while preserving the relative order of the non-zero elements.

## Approach

Keep a pointer to the next valid position. Copy each non-zero value into the front and then fill the remaining positions with zeros.

## Example

Input:
```text
nums = [0, 1, 0, 3, 12]
```

Output:
```text
[1, 3, 12, 0, 0]
```

## Complexity

- Time: O(n)
- Space: O(1)

## Solution File

- [07-move-zeroes.c](07-move-zeroes.c)
