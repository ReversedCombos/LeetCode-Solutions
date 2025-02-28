# Explanation: Valid Anagram

## **Approach**
### **Using an Unordered Map (`O(N)`)**
1. Check if `s` and `t` have different lengths; if so, return `false`.
2. Iterate through `s` and `t` simultaneously:
   - Increase the count for each character in `s`.
   - Decrease the count for each character in `t`.
3. Iterate again to ensure all counts are zero.

### **Why Use a Hash Map?**
✅ **O(1) average lookup time**  
✅ **Efficient insertions and deletions (`O(1)`)**  
✅ **Space-efficient (`O(1)`, since only lowercase English letters exist)**  

See the [solution.cpp](solution.cpp) for implementation.

---

### **Alternative: Sorting Approach (`O(N log N)`)**
- Sort both strings and compare them.
- Sorting takes `O(N log N)`, making it slower.

See the [solution_sorted.cpp](solution_sorted.cpp) for implementation.
