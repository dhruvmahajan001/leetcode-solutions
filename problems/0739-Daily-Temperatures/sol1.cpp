// ==========================================================
// 739. Daily Temperatures
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 19 ms (Beats 71%)
// Memory     : 107.4 MB (Beats 36%)
// Link       : https://leetcode.com/problems/daily-temperatures/
// ==========================================================

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> st;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
           while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                ans[st.top()]=i-st.top();
                st.pop();
        }
        st.push(i);
        }
        return ans;
    }
};