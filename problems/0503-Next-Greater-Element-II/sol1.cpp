// ==========================================================
// 503. Next Greater Element II
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 28.4 MB (Beats 82%)
// Link       : https://leetcode.com/problems/next-greater-element-ii/
// ==========================================================

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        stack<int> st;

        for(int i=0;i<2*n;i++){
            while(!st.empty() && nums[st.top()]<nums[i%n]){
                ans[st.top()]=nums[i%n];
                st.pop();
            }
            if(i<n) st.push(i);
        }

        return ans;
    }
};