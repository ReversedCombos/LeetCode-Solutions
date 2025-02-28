# LeetCode 242: Valid Anagram

## Problem Statement
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

## Solution Approach
The best approach is to use an **unordered map (`O(N)`)** to track character frequencies.

- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(1)`

### **Code Implementation**
See [solution.cpp](solution.cpp) for the optimized solution.

---

## Alternative Approaches
1. **Sorting Approach (`O(N log N)`)**  
   - Sort both strings and compare them.
   - See [solution_sorted.cpp](solution_sorted.cpp) for implementation.
   - See [complexity.md](complexity.md) for tradeoffs.

For an in-depth breakdown, refer to [explanation.md](explanation.md).
