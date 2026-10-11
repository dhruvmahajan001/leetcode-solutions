// ==========================================================
// 258. Add Digits
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.5 MB (Beats 99%)
// Link       : https://leetcode.com/problems/add-digits/
// ==========================================================

class Solution {
public:
    int addDigits(int n) {
       return n == 0 ? 0 : 1 + (n - 1) % 9;
    }
};