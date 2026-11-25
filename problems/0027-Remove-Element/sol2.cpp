// ==========================================================
// 27. Remove Element
// Difficulty : Easy
// Language   : C++
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.7 MB (Beats 33%)
// Link       : https://leetcode.com/problems/remove-element/
// ==========================================================

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
                if(nums[i]==val){
                    nums.erase((nums.begin()+i));
                    i--;
                }
            
        }
         return nums.size();
    }
};