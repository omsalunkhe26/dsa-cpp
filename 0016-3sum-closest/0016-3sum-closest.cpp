class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        int maxdiff = INT_MAX; 
        int diff;
        int total=0;     
        for(i=0;i<n-2;i++){
            int left=i+1;        
            int right=n-1;  
            while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
                diff=abs(sum-target);
                if(diff<maxdiff){
                    maxdiff=diff;
                    total=sum;
                }
            if(sum==target){
                return total;
            }
            else if(sum<target){
               left++;
            }
            else{
                right--;
            }
            }
            
        }
       return total;
    }
};