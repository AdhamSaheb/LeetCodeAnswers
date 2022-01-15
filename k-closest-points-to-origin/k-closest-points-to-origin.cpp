class Solution {
public:
    
    struct Comparator{
        bool operator()(vector<int> &a , vector<int> &b) {
            return sqrt(pow(a[0],2) + pow(a[1],2) ) < sqrt(pow(b[0],2) + pow(b[1],2) );
        }  
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans ;
        priority_queue<vector<int>,vector<vector<int>>, Comparator> heap ;
        for(auto point : points) {
            heap.push(point);
            if(heap.size() > k ) heap.pop();
        }
        while(heap.size()){
            ans.push_back(heap.top()); heap.pop();
        }
        return ans ;        
    }
    

};