// ==========================================================
// 326. Power of Three
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 5 ms (Beats 31%)
// Memory     : 9.1 MB (Beats 10%)
// Link       : https://leetcode.com/problems/power-of-three/
// ==========================================================

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n > 0 && 1162261467 % n == 0){
            return true;
        }
        else{
            return false;
        }
    }
};