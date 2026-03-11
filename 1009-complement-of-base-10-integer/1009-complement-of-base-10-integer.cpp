class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;
        
        int mask = 1;
        while (mask < n) {
            mask = (mask << 1) | 1; // build a mask of all 1s (e.g. 1 → 11 → 111)
        }
        return mask ^ n; // XOR flips all bits within the relevant bit-length
    }
};