class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int> list;
        while (n!=1){
            n = calcsum(n);
            if (list.find(n)!=list.end())
                return false;
            list.insert(n);
        }
        
        // control will arrive here only if n == 1 i.e given number is "happy"
        return true;
    }
    
    
    int calcsum(int n){
        int sum = 0, r;
        while (n!=0){
            r = n % 10;
            n = n / 10;
            sum += (int)pow(r, 2);
        }
        
        return sum;
    }
};