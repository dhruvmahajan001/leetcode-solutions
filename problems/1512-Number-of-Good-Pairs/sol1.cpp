// ==========================================================
// 1512. Number of Good Pairs
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 9.7 MB (Beats 51%)
// Link       : https://leetcode.com/problems/number-of-good-pairs/
// ==========================================================

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};