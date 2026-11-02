// ==========================================================
// 1. Two Sum
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 2 ms (Beats 74%)
// Memory     : 15 MB (Beats 27%)
// Link       : https://leetcode.com/problems/two-sum/
// ==========================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> mp;
     for(int i=0;i<nums.size();i++){
        int first=nums[i];
        int valLeft=target-first;
        if(mp.find(valLeft)!=mp.end()){
            return {mp[valLeft],i};
        }
        mp[nums[i]]=i;
     }

return {};
    }
};