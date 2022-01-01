class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0 ; 
        int count = 0 ;
        for(auto sentence: sentences){
            stringstream ss(sentence);
            string token;
            while(getline(ss, token, ' ')) {
                count ++ ;
            }
            ans = max(ans,count);
            count = 0 ; 
        }
        return ans ;
    }
};