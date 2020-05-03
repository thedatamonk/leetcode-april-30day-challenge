class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // calculating left sum 
        vector<int> ans;
        ans.push_back(1);
        int curr_prod = 1;
        for (int i=1; i<nums.size(); i++){
            curr_prod*=nums[i-1];
            ans.push_back(curr_prod);
        }
        
        curr_prod = 1;
        for (int i=nums.size()-2; i>=0; i--){
            curr_prod *= nums[i+1];
            ans[i] *= curr_prod;
        }
        
        return ans;
    }
};