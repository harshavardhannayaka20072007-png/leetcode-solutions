# 04. Best Time to Buy and Sell Stock

**Difficulty:** Easy  
**Category:** Arrays & Strings  
**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem

Find the maximum profit by buying and selling a stock once.

## Approach

Track the minimum price seen so far. For each day, compute the profit if sold on that day and keep the maximum profit found.

## Example

Input:
```text
prices = [7, 1, 5, 3, 6, 4]
```

Output:
```text
5
```

## Complexity

- Time: O(n)
- Space: O(1)

## Solution File

- [04-best-time-to-buy-and-sell-stock.c](04-best-time-to-buy-and-sell-stock.c)
