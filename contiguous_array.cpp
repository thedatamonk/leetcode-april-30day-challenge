class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> map;
        
        int count = 0, max_len = 0;
        map.insert({0, -1});
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 0) count--;
            else count++;
            
            if (map.find(count)==map.end())
                map.insert({count, i});
            else{
                max_len = max(max_len, i - map[count]); 
            }
        }
        
        return max_len;
    }
};