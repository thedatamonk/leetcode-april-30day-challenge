class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> set;
        
        // creating the set of digits present
        for (int i=0; i<arr.size(); i++){
            if (set.find(arr[i])==set.end()){
                set.insert(arr[i]);
            }
        }
        
        // now traverse the array again
        int count=0;
        for (int i=0; i<arr.size(); i++){
            if (set.find(arr[i]+1) != set.end())
                count++;
        }
        
        return count;
        
    }
};