# LeetCode 217: Contains Duplicate

## Problem Statement
Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is **distinct**.

## Examples
See [examples.md](examples.md) for test cases.

## Solution Approach
The best approach uses an **unordered set** to track unique elements.

- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(N)`

### **Code Implementation**
See [solution.cpp](solution.cpp) for the optimized solution.

---

## Alternative Approaches
1. **Sorting Approach (`O(N log N)`)**  
   - See [solution_sorted.cpp](solution_sorted.cpp) for implementation.
   - See [complexity.md](complexity.md) for tradeoffs.

For an in-depth breakdown, refer to [explanation.md](explanation.md).