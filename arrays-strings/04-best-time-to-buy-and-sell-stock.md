# Best Time to Buy and Sell Stock

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

This program calculates the maximum profit that can be made from a single stock transaction.

## Problem Overview

Given an array of prices, you can buy on one day and sell on a later day. The goal is to maximize the profit.

Example:

- Input prices: `[7, 1, 5, 3, 6, 4]`
- Maximum profit: `5`

## How the Program Works

1. The program keeps track of the lowest price seen so far.
2. For each price, it calculates the profit if the stock were sold today.
3. It updates the best profit whenever a better opportunity is found.
4. Finally, it prints the maximum profit.

## Example

```text
Test 1 profit: 5
Test 2 profit: 0
```

## Time Complexity

- `O(n)`

## Space Complexity

- `O(1)`

## Compile and Run

```bash
gcc 04-best-time-to-buy-and-sell-stock.c -o 04-best-time-to-buy-and-sell-stock
./04-best-time-to-buy-and-sell-stock
```
