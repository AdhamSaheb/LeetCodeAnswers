class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans ;
        unordered_map<int,int> seen;
        
        sort(changed.begin(),changed.end());
        
        for(auto num : changed) {
            if(seen.count(num/2) and !(num&1) ){
                seen[num/2] -- ;
                if(!seen[num/2]){
                    seen.erase(num/2);
                }
                ans.push_back(num/2);
            }
            else seen[num] ++ ;
        }
        return (seen.size() != 0 ) ? vector<int>() : ans; 
    }
};
