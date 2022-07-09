class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0 ; 
        for(int i = 0 ; i < 32 ; i++) {
            ans += (start >> i) & 1    ^   (goal >> i) & 1;
        } 
        return ans ;
    }
};