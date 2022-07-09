class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_set<string> prefixes; 
        string prefix = "";
        int ans = 0 ; 
        for(char c : s ) {
            prefix += c ;
            prefixes.insert(prefix);
        }
        for(string word : words)  ans += prefixes.count(word);
        return ans ; 
    }
};