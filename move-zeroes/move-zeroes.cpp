class Solution {
public:
    void moveZeroes(vector<int>& arr) {
    
        for(int i = 0 ; i < arr.size() ; i++){
            if(!arr[i]){
                int nonZero = i ;
                // swap with first non zero elem
                while(nonZero < arr.size() and !arr[nonZero] ) {
                    nonZero ++;
                }
                if(nonZero == arr.size()) return;
                else{
                    swap(arr[i],arr[nonZero]);
                }
            }
        } 
    }
};
