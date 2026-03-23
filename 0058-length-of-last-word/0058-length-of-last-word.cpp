class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        
        // start from end
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == ' ' && len == 0) continue; // skip trailing spaces
            if(s[i] == ' ') break;
            len++;
        }
        
        return len;
    }
};