# 05. Longest Common Prefix

**Difficulty:** Easy  
**Category:** Arrays & Strings  
**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

## Problem

Given an array of strings, find the common prefix shared by all of them.

## Approach

Start with the first string as the prefix. Compare it to each subsequent string and shorten the prefix until all strings match it.

## Example

Input:
```text
strs = ["flower", "flow", "flight"]
```

Output:
```text
"fl"
```

## Complexity

- Time: O(n * m)
- Space: O(1) besides the output string

## Solution File

- [05-longest-common-prefix.c](05-longest-common-prefix.c)
