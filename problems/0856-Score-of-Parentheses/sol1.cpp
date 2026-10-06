// ==========================================================
// 856. Score of Parentheses
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.1 MB (Beats 42%)
// Link       : https://leetcode.com/problems/score-of-parentheses/
// ==========================================================

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(char c:s){
            if(c=='('){
                st.push(0);
            }
            else{
                int x=st.top();
                st.pop();
                int val=x==0?1:2*x;
                st.top()+=val;
            }
        }

        return st.top();
    }
};