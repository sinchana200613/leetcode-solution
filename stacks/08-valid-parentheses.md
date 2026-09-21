## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets while scanning the string.
Whenever a closing bracket appeared, I checked whether it matched the most recent opening bracket. If all brackets matched and the stack was empty at the end, the string was valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I tested the solution locally with a valid parentheses case and an invalid parentheses case before submitting it on LeetCode.