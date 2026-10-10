// ==========================================================
// 402. Remove K Digits
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 4 ms (Beats 46%)
// Memory     : 11.7 MB (Beats 30%)
// Link       : https://leetcode.com/problems/remove-k-digits/
// ==========================================================

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans="";
        for(char c:num){
            while(!st.empty() && k>0 && c<st.top()){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(k>0) {
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.size() && ans[i]=='0')
            i++;
        ans=ans.substr(i);
        if(ans=="")
           return "0";

        return ans;


    }
};