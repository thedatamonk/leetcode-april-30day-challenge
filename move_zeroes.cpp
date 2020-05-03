class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_ix = -1, insert_here = -1;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0){
                if (insert_here == -1)
                    insert_here = i;
            }else{
                // nums[i] != 0
                if (insert_here != -1){
                    nums[insert_here] = nums[i];
                    nums[i] = 0;
                    ++insert_here;
                }
            }
        }
        
    }
};