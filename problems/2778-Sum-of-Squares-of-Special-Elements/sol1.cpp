// ==========================================================
// 2778. Sum of Squares of Special Elements 
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 40.2 MB (Beats 42%)
// Link       : https://leetcode.com/problems/sum-of-squares-of-special-elements/
// ==========================================================

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(n%(i+1)==0)
            ans+=nums[i]*nums[i];
        }
        return ans;
    }
};