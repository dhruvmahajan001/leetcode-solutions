// ==========================================================
// 946. Validate Stack Sequences
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 19 MB (Beats 74%)
// Link       : https://leetcode.com/problems/validate-stack-sequences/
// ==========================================================

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j=0;
        for(int i=0;i<popped.size();i++) {
            st.push(pushed[i]);
            while(!st.empty() && j<popped.size() && st.top()==popped[j]) {
                st.pop();
                j++;
            }
        }

        return st.empty();
    }
};