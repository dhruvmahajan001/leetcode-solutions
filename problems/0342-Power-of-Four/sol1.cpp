// ==========================================================
// 342. Power of Four
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 7.8 MB (Beats 80%)
// Link       : https://leetcode.com/problems/power-of-four/
// ==========================================================

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n > 0 && (n & (n-1)) == 0 && (n & 0x55555555)){
            return true;
        }
        else{
            return false;
        }
    }
};