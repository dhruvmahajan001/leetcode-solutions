// ==========================================================
// 20. Valid Parentheses
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.7 MB (Beats 85%)
// Link       : https://leetcode.com/problems/valid-parentheses/
// ==========================================================

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                if(c==')' && st.top()!='(' || c==']' && st.top()!='[' || c=='}' && st.top()!='{'){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};