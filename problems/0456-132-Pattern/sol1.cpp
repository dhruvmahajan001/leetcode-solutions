// ==========================================================
// 456. 132 Pattern
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 10 ms (Beats 71%)
// Memory     : 70.8 MB (Beats 52%)
// Link       : https://leetcode.com/problems/132-pattern/
// ==========================================================

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int j=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            if(j>nums[i]) return true;
            while(!st.empty() && st.top()<nums[i]){
                j=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};