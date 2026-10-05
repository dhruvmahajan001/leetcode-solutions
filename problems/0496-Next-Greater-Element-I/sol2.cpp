// ==========================================================
// 496. Next Greater Element I
// Difficulty : Easy
// Language   : C++
// Solution   : #2
// Runtime    : 6 ms (Beats 12%)
// Memory     : 12.3 MB (Beats 92%)
// Link       : https://leetcode.com/problems/next-greater-element-i/
// ==========================================================

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans(nums1.size(),-1);

    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                for(int k=j+1;k<nums2.size();k++){
                    if(nums2[k]>nums2[j]){
                        ans[i]=nums2[k];
                        break;
                    }
                }
                break;
            }
        }
    }

    return ans;

        // stack<int> st;
        // unordered_map<int,int>mp;
        // for(int x: nums2){
        //     while(!st.empty() && st.top()<x){
        //         mp[st.top()]=x;
        //         st.pop();
        //     }
        //     st.push(x);
        // }
        // while(!st.empty()){
        //     mp[st.top()]=-1;
        //     st.pop();
        // }
        // vector<int> ans;
        // for(int x:nums1){
        //     ans.push_back(mp[x]);
        // }
        // return ans;
    }
};