#include <string>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Since the prompt guarantees s and t consist of valid ASCII characters,
        // we can use two arrays of size 256 to track character mappings.
        int map_s[256] = {0};
        int map_t[256] = {0};
        
        for (int i = 0; i < s.length(); ++i) {
            // If the last seen positions of the current characters don't match,
            // the mapping is broken.
            if (map_s[s[i]] != map_t[t[i]]) {
                return false;
            }
            
            // Record the current position (i + 1) for both characters.
            // We use i + 1 instead of i because the arrays are initialized to 0.
            map_s[s[i]] = i + 1;
            map_t[t[i]] = i + 1;
        }
        
        return true;
    }
};