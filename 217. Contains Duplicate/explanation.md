# Explanation: Contains Duplicate

## **Approach**
### **Using an Unordered Set (`O(N)`)**
1. Create a **hash set** to store unique values.
2. Iterate through `nums`:
   - If an element is already in the set, return `true`.
   - Otherwise, insert it.
3. If we finish iterating, return `false` (no duplicates found).

### **Why Use a Hash Set?**
✅ **O(1) average lookup time**  
✅ **Efficient insertion (`O(1)`)**  
✅ **Simple and clean implementation**  

See the [solution.cpp](solution.cpp) for code.

---

### **Alternative: Sorting Approach (`O(N log N)`)**
- Sort `nums`, then **check adjacent elements** for duplicates.
- Sorting takes `O(N log N)`, so it's slower.

See the [solution_sorted.cpp](solution_sorted.cpp) for implementation.
