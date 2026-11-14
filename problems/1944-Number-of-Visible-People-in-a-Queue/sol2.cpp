// ==========================================================
// 1944. Number of Visible People in a Queue
// Difficulty : Hard
// Language   : C++
// Solution   : #2
// Runtime    : 13 ms (Beats 77%)
// Memory     : 88.6 MB (Beats 45%)
// Link       : https://leetcode.com/problems/number-of-visible-people-in-a-queue/
// ==========================================================

class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        
        stack<int>st;
        int n= nums.size();
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()<nums[i]){
                ans[i]++;
                st.pop();
            }
            if(!st.empty()){
                ans[i]++;
            }
            st.push(nums[i]);
            
          
        }
        return ans;
    }
};