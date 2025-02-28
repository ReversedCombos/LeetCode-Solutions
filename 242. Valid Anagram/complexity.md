# Complexity Analysis

## **Unordered Map Approach**
- **Time Complexity:** `O(N)`, since we iterate once and perform constant-time lookups.
- **Space Complexity:** `O(1)`, since we store at most 26 characters (constant space).

## **Sorting Approach**
- **Time Complexity:** `O(N log N)`, dominated by sorting.
- **Space Complexity:** `O(1)`, if sorting is done in-place.

### **Comparison**
| Approach  | Time Complexity | Space Complexity | Notes |
|-----------|---------------|-----------------|-------|
| Hash Map  | O(N)          | O(1)            | Fastest |
| Sorting   | O(N log N)    | O(1)            | Slower but simple |

**Conclusion:** The **unordered map approach** is the best solution for this problem.
