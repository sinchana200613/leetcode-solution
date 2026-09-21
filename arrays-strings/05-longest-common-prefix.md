## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters of the first string with the characters at the same position in all the other strings.
I stopped when a character was different or when the end of a string was reached, and returned the common prefix.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested the solution locally with a normal case and an edge case where the strings have no common prefix before submitting it on LeetCode.