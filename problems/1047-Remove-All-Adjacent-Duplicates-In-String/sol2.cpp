// ==========================================================
// 1047. Remove All Adjacent Duplicates In String
// Difficulty : Easy
// Language   : C++
// Solution   : #2
// Runtime    : 5 ms (Beats 60%)
// Memory     : 14.2 MB (Beats 58%)
// Link       : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// ==========================================================

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
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