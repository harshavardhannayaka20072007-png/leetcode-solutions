# 03. Valid Anagram

**Difficulty:** Easy  
**Category:** Arrays & Strings  
**LeetCode:** https://leetcode.com/problems/valid-anagram/

## Problem

Given two strings, determine whether they are anagrams of each other.

## Approach

Count the frequency of each character in the first string and subtract the frequency of each character in the second string. If all counts are zero, the strings are valid anagrams.

## Example

Input:
```text
s = "anagram"
t = "nagaram"
```

Output:
```text
true
```

## Complexity

- Time: O(n)
- Space: O(1) for a fixed alphabet size

## Solution File

- [03-valid-anagram.c](03-valid-anagram.c)
