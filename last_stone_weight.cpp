class Solution {
public:
    int lastStoneWeight(vector<int>& v1) {
        // we create the max_heap from the list of vectors
        int num = v1.size(), max1, max2, diff;
        make_heap(v1.begin(), v1.end());
        
        while (v1.size() >1){
            // extract first largest elemennt from the heap
            max1 = v1.front();
            
            // delete first largest element
            pop_heap(v1.begin(), v1.end());
            v1.pop_back();
            
            // extract second largest element from the heap
            max2 = v1.front();
            
            // delete second largest element 
            pop_heap(v1.begin(), v1.end());
            v1.pop_back();
            
            diff = abs(max1 - max2);
            
            // only if difference between the two largest values > 0, push the difference into the heap
            if (diff > 0){
                v1.push_back(diff);
                // now heapfiy it so as to maintain the heap property
                push_heap(v1.begin(), v1.end());
            }
            
        }
        
        return v1.size() == 1?v1.front():0;
        
    }
};