class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;
        string pre = "";
        stringstream ss(text);
        bool found = false;
        for(string word; ss >> word; )
        {
            if(found) res.push_back(word);
            found = 0;
            if(word == second && pre == first) found = true;
            pre = word;
        }
        return res;
    }
};