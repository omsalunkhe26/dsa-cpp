class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int piv = -1;
        int n = nums.size();

        // Step 1: find pivot
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                piv = i;
                break;
            }
        }

        // Step 2: if no pivot
        if(piv == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: find next greater element and swap
        for(int i = n - 1; i > piv; i--){
            if(nums[i] > nums[piv]){
                swap(nums[i], nums[piv]);
                break;
            }
        }

        // Step 4: reverse suffix
        reverse(nums.begin() + piv + 1, nums.end());
    }
};