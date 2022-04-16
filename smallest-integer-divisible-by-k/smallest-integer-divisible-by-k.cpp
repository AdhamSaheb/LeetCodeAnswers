class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2 == 0 or k%5 == 0)
            return -1;
        int n = 1;
        int c=1;
        while(n%k!=0){
            n = n%k;
            n*=10;
            n+=1;
            c+=1;
        }
        return c;
    }
};