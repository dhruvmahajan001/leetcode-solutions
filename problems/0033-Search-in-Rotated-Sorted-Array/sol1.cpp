// ==========================================================
// 33. Search in Rotated Sorted Array
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 15.1 MB (Beats 97%)
// Link       : https://leetcode.com/problems/search-in-rotated-sorted-array/
// ==========================================================

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};