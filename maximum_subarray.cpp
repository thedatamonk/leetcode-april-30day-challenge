class Solution {
public:
    int maxSubArray(vector<int>& nums){
        
        if (nums.size()==1) return nums[0];
        
        int max = nums[0];
        for (int i=1; i<nums.size(); i++){
            if (max < nums[i]) max = nums[i];
        }
        if (max < 0) return max;
        
        int max_sum = 0, max_so_far = 0;
        
        for (int i=0; i<nums.size(); i++){
            if (max_so_far + nums[i] >= 0)
                max_so_far += nums[i];
            else
                max_so_far = 0;
            
            if (max_sum < max_so_far) max_sum = max_so_far;
        }
        
        return max_sum;
    }
};