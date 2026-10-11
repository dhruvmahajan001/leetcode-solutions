// ==========================================================
// 292. Nim Game
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 7.7 MB (Beats 87%)
// Link       : https://leetcode.com/problems/nim-game/
// ==========================================================

class Solution {
public:
    bool canWinNim(int n) {
        return n%4!=0;
    }
};