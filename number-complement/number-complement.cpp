class Solution {
public:
    int findComplement(int num) {
        int bits = log10(num)/log10(2); 
        return num^( (long)(1<<(bits+1)) -1)  ;
    }
};