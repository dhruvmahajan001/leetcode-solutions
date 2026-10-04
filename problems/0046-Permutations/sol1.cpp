// ==========================================================
// 46. Permutations
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 10.5 MB (Beats 70%)
// Link       : https://leetcode.com/problems/permutations/
// ==========================================================

class Solution {
public:
    void solve(vector<int>&nums,int i,vector<vector<int>>&ans){
          if(i==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            solve(nums,i+1,ans);
            swap(nums[i],nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>&nums){
        vector<vector<int>>ans;
        solve(nums,0,ans);
        return ans;
    }
};