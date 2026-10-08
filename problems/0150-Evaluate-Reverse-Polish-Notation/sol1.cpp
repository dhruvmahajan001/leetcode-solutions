// ==========================================================
// 150. Evaluate Reverse Polish Notation
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 1 ms (Beats 49%)
// Memory     : 17.2 MB (Beats 18%)
// Link       : https://leetcode.com/problems/evaluate-reverse-polish-notation/
// ==========================================================

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string s:tokens){
            if(s!="+" && s!="-" && s!="/" && s!="*"){
                st.push(stoi(s));
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(s=="+") st.push(a+b);
                else if(s=="-") st.push(b-a);
                else if(s=="*") st.push(b*a);
                else st.push(b/a);
            }

        }
        return st.top();
    }
};