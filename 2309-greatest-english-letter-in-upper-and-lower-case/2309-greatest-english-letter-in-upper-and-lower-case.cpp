class Solution {
public:
    string greatestLetter(string s) {
        int upp[26] = {0};
        int low[26] = {0};
        string str = "";
        for(char c : s){
            if(c >= 'a' and c <= 'z')
                upp[c -'a']++;
            else
                low[c -'A']++;
        }
        
        for(int i=25;i>=0;i--){
            if(upp[i]>0 && low[i]>0){
                str+=char('A'+ i);
                return str;
            }
        }
        return str;
    }
};