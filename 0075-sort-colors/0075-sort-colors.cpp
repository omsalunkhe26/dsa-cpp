class Solution {
public:
    void sortColors(vector<int>& nums) {
      int countZero=0;
      int countOne=0;
      int countTwo=0;
      int high=nums.size();

      for(int i=0;i<high;i++){
        if(nums[i]==0){
            countZero++;
        }
        else if(nums[i]==1){
            countOne++;
        }
        else{
            countTwo++;
        }

      }
      int index=0;
        for(int j=0;j<countZero;j++){
            nums[index++]=0;
            
        }
        for(int k=0;k<countOne;k++){
            nums[index++]=1;
        
        }
        for(int l=0;l<countTwo;l++){
            nums[index++]=2;
        }
        
    }
};