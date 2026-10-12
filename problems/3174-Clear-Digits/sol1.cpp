// ==========================================================
// 3174. Clear Digits
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 2 ms (Beats 18%)
// Memory     : 9.2 MB (Beats 20%)
// Link       : https://leetcode.com/problems/clear-digits/
// ==========================================================

class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string ans="";
        for(char c:s){
            if(!isdigit(c)){
                st.push(c);
            }
            else{
                st.pop();
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};