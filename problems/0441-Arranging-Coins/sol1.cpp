// ==========================================================
// 441. Arranging Coins
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.8 MB (Beats 35%)
// Link       : https://leetcode.com/problems/arranging-coins/
// ==========================================================

class Solution {
public:
    int arrangeCoins(int n) {
        return (int)((sqrt(8LL * n + 1) - 1) / 2);
    }
};