## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used an array of 26 integers to count the frequency of each lowercase letter.
I increased the count for each character in the first string and decreased it for each character in the second string. If all counts are zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the solution locally with a valid anagram case and a non-anagram case before submitting it on LeetCode.