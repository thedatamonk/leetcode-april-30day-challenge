class MinStack {
public:
    /** initialize your data structure here. */
    vector<pair<int, int>> st;
    MinStack() {
    }
    
    void push(int x) {
        int min_so_far;
        if (st.size()==0)
            min_so_far = x;
        else
            min_so_far = min(x, st[st.size()-1].second);
        
        st.push_back({x, min_so_far});
    }
    
    void pop() {
        if (st.size() > 0)
            st.erase(st.end());
    }
    
    int top() {
        return st[st.size()-1].first;
    }
    
    int getMin() {
        return st[st.size()-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */