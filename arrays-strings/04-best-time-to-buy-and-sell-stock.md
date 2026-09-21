## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far while going through the array.
For each price, I calculated the possible profit and updated the maximum profit whenever I found a larger value.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally with a normal case and a case where no profit is possible before submitting it on LeetCode.