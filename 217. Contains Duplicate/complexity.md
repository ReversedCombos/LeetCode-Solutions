# Complexity Analysis

## **Unordered Set Approach**
- **Time Complexity:** `O(N)`, since we insert each element once and lookups are `O(1)`.
- **Space Complexity:** `O(N)`, storing all unique elements.

## **Sorting Approach**
- **Time Complexity:** `O(N log N)`, since sorting dominates.
- **Space Complexity:** `O(1)`, assuming in-place sorting.

### **Comparison**
| Approach  | Time Complexity | Space Complexity | Notes |
|-----------|---------------|-----------------|-------|
| Hash Set  | O(N)          | O(N)            | Fastest |
| Sorting   | O(N log N)    | O(1)            | Slower, modifies input |

**Conclusion:** The **hash set approach** is optimal for this problem.