/*
Slide a window of size k over the k engs with highest perfomance and at each window multiply with min speed with min heap
*/
class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        int MOD = 1000000007;
        long ans = 0;
        vector<pair<int,int>> engs; 
        priority_queue<int,vector<int>,greater<int>> minHeap;
        
        for(int i = 0 ; i < n ; i++) engs.push_back({efficiency[i],speed[i]});
        
        // sort decending
        sort(engs.rbegin(),engs.rend());
        // slide window
        long currentSpeed = 0; 
        for(auto eng : engs) {
            currentSpeed += eng.second; 
            minHeap.push(eng.second);
            if(minHeap.size() > k){
                currentSpeed -= minHeap.top(); 
                minHeap.pop();
            }
            ans = max(ans, currentSpeed * eng.first);

        }
        return ans % 1000000007 ;
    }
};