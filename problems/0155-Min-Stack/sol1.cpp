// ==========================================================
// 155. Min Stack
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 47 ms (Beats 86%)
// Memory     : 151.3 MB (Beats 54%)
// Link       : https://leetcode.com/problems/min-stack/
// ==========================================================

class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(minst.empty() || value<=minst.top()){
            minst.push(value);
        }

    }
    
    void pop() {
        if(st.top()==minst.top())
            minst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */