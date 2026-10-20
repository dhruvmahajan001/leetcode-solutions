// ==========================================================
// 2206. Divide Array Into Equal Pairs
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 1 ms (Beats 66%)
// Memory     : 16.9 MB (Beats 82%)
// Link       : https://leetcode.com/problems/divide-array-into-equal-pairs/
// ==========================================================

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            if(nums[i]!=nums[i+1]) return false;
        }
        return true;
    }
};