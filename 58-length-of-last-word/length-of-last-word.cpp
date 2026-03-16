class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, len = 0;
        
        while (i >= 0 && s[i] == ' ') i--;  // skip trailing spaces
        while (i >= 0 && s[i] != ' ') {     // count last word
            len++;
            i--;
        }
        return len;
    }
};