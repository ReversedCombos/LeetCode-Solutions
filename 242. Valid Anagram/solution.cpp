#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> umap{};

        if (s.size() != t.size()) return false;
        for (int i = 0; i < s.size(); i++) {
            umap[s[i]]++;
            umap[t[i]]--;
        }
        for (char c : s) {
            if (umap[c] != 0) {
                return false;
            }
        }
        return true;
    }
};
