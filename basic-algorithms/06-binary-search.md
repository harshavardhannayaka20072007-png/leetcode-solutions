# Binary Search

**LeetCode:** https://leetcode.com/problems/binary-search/

This program searches for a target value in a sorted array using binary search.

## Problem Overview

Binary search repeatedly divides the search range in half until the target is found or the range becomes empty.

## How the Program Works

1. The program sets `left` to the start of the array and `right` to the end.
2. It finds the middle element.
3. If the middle element is the target, it returns its index.
4. If the target is smaller, it searches the left half.
5. If the target is larger, it searches the right half.

## Example

```text
Target found at index 3
```

## Time Complexity

- `O(log n)`

## Space Complexity

- `O(1)`

## Compile and Run

```bash
gcc 06-binary-search.c -o 06-binary-search
./06-binary-search
```
