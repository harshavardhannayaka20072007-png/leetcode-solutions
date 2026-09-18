# Move Zeroes

**LeetCode:** https://leetcode.com/problems/move-zeroes/

This program moves all zero values in an array to the end while preserving the order of the non-zero elements.

## Problem Overview

Given an array, the challenge is to rearrange it so that all zero elements are shifted to the end.

Example:

- Input: `[0, 1, 0, 3, 12]`
- Output: `[1, 3, 12, 0, 0]`

## How the Program Works

1. The program scans the array and copies non-zero elements to the front.
2. It tracks the next available position with `nonZeroIndex`.
3. After scanning, it fills the remaining positions with zeros.

## Example

```text
Result: 1 3 12 0 0
```

## Time Complexity

- `O(n)`

## Space Complexity

- `O(1)`

## Compile and Run

```bash
gcc 07-move-zeroes.c -o 07-move-zeroes
./07-move-zeroes
```
