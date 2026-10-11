// ==========================================================
// 2119. A Number After a Double Reversal
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 7.8 MB (Beats 22%)
// Link       : https://leetcode.com/problems/a-number-after-a-double-reversal/
// ==========================================================

class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num== 0 || num % 10 != 0;
    }
};