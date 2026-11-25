// ==========================================================
// 27. Remove Element
// Difficulty : Easy
// Language   : C++
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.5 MB (Beats 90%)
// Link       : https://leetcode.com/problems/remove-element/
// ==========================================================

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int j = 0;

for(int i = 0; i < nums.size(); i++)
{
    if(nums[i] != val)
    {
        nums[j] = nums[i];
        j++;
    }
}

return j;
    }
};