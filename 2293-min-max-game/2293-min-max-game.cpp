class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size() == 1 ) return nums[0];
        vector<int> next;
        for(int i = 0 ; i < nums.size()/2 ; i++) {
            if( next.size() % 2  ) {
                next.push_back( max(nums[2*i],nums[2*i + 1]) );
            } else {
                next.push_back( min(nums[2*i],nums[2*i + 1]) );
            }
        }
        return minMaxGame(next);
    }
};