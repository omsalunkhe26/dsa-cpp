class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=-1,end=-1;
        for(int j=0;j<n;j++){
               if(target==nums[j]){
                if(start==-1){
                   start=j;
                }
                end=j;
               }
        }
            
         return {start,end};   
        }
         
    
};