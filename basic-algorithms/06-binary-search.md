# 06. Binary Search

**Difficulty:** Easy  
**Category:** Basic Algorithms  
**LeetCode:** https://leetcode.com/problems/binary-search/

## Problem

Search for a target value in a sorted array and return its index.

## Approach

Use a left and right pointer. Compute the middle index and move the search range left or right depending on the target comparison.

## Example

Input:
```text
nums = [-1, 0, 3, 5, 9, 12]
target = 9
```

Output:
```text
4
```

## Complexity

- Time: O(log n)
- Space: O(1)

## Solution File

- [06-binary-search.c](06-binary-search.c)
