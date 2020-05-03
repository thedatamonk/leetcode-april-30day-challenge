class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1, s2;
        
        int i=0;
        while (i<S.length()){
            if (S[i]!='#')
                s1.push(S[i]);
            else{
                if (!s1.empty())
                    s1.pop();
            }
            
            i++;
        }
        
        i=0;
        while (i<T.length()){
            if (T[i]!='#')
                s2.push(T[i]);
            else{
                if (!s2.empty())
                    s2.pop();
            }
            i++;
        }
        
        while (!s1.empty() && !s2.empty()){
            if (s1.top()!=s2.top()) return false;
            
            s1.pop(), s2.pop();
            
        }
        
        return s1.empty() && s2.empty();
    }
};