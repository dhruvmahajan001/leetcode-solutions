// ==========================================================
// 2769. Find the Maximum Achievable Number
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 9.6 MB (Beats 78%)
// Link       : https://leetcode.com/problems/find-the-maximum-achievable-number/
// ==========================================================

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num+2*t;
    }
};