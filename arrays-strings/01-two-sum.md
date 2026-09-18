# 01. Two Sum

**Difficulty:** Easy  
**Category:** Arrays & Strings  
**LeetCode:** https://leetcode.com/problems/two-sum/

## Problem

Given an array of integers and a target value, return the indices of the two numbers that add up to the target.

## Approach

Use nested loops to check each pair of numbers. When a pair matches the target, print the indices immediately.

## Example

Input:
```text
nums = [2, 7, 11, 15]
target = 9
```

Output:
```text
[0, 1]
```

## Complexity

- Time: O(n²)
- Space: O(1)

## Solution File

- [01-two-sum.c](01-two-sum.c)