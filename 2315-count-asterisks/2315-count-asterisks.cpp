class Solution {
public:
    int countAsterisks(string s) {
        int count = 0 ;
        bool seenBar = false ; 
        for(char c : s ) {
            count += (c == '*' and !seenBar);
            if(c == '|') {
                seenBar = !seenBar; 
            }    
        }
        return count ;
    }
};