// ==========================================================
// 1047. Remove All Adjacent Duplicates In String
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 9 ms (Beats 33%)
// Memory     : 17.2 MB (Beats 11%)
// Link       : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// ==========================================================

class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(!st.empty()  && st.top()==s[i]){
                st.pop();
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};