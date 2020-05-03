class Solution {
public:
    bool checkValidString(string s) {
        int min_diff=0, max_diff=0, i = 0, len = s.length();
        
        while (i<len){
            if (s[i] == '('){
                min_diff++;
                max_diff++;
            }else if(s[i] == ')'){
                min_diff--;
                max_diff--;
            }else{
                // s[i] == '*'
                min_diff--;
                max_diff++;
            }
            
            if (max_diff < 0){
                // max difference between left and right parentheses till this point is negative, so
                // there is no way the string can be valid
                return false;
            }
            
            if (min_diff < 0){
                // Consider the case s = "(*)("; At index 2, min_diff = -1 and max_diff = 1. If we don't forced the
                // min_diff to 0, then at index 3 min_diff = 0 and max_diff = 2. And since min_diff = 0, the string will
                // considered valid whereas in reality it is not.
                min_diff = 0;
            }
            
            i++;
        }
        
        // if min_diff == 0, then the string can be valid else not
        return min_diff == 0;
    }
};