# 08. Valid Parentheses

**Difficulty:** Easy  
**Category:** Stacks  
**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Problem

Given a string containing parentheses, determine whether the input string is valid.

## Approach

Use a stack. When an opening bracket is seen, push it. When a closing bracket is seen, pop the last opening bracket and verify it matches. If the stack is empty or mismatched, return false.

## Example

Input:
```text
s = "()[]{}"
```

Output:
```text
true
```

## Complexity

- Time: O(n)
- Space: O(n)

## Solution File

- [08-valid-parentheses.c](08-valid-parentheses.c)
