#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> uset;
        for (const int& i : nums) {
            if (!uset.insert(i).second) {
                return true;
            }
        }
        return false;
    }
};
