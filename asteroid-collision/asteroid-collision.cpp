class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans ;
        stack<int> stk;
        for(auto astroid : asteroids){
            if(!stk.size() or stk.top() < 0 or (stk.top() * astroid) > 0  ) stk.push(astroid);
            while(stk.size() and astroid < 0 and stk.top() > 0 ){
                if(abs(astroid) >= abs(stk.top())) {
                    int top = stk.top(); stk.pop();
                    if(abs(astroid) == abs(top)) break;
                    if(!stk.size() or (stk.top() * astroid) > 0){
                        stk.push(astroid);
                        break;
                    }
                }else break;
            }
        }
        while(stk.size()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};