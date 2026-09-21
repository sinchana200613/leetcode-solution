## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used binary search by maintaining two pointers, left and right.
I checked the middle element and reduced the search range based on whether the target was smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

I tested the solution locally with a normal case where the target was found and an edge case where the target was not found before submitting it on LeetCode.