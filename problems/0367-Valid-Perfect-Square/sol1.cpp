// ==========================================================
// 367. Valid Perfect Square
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 7.8 MB (Beats 53%)
// Link       : https://leetcode.com/problems/valid-perfect-square/
// ==========================================================

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1,r=num;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(mid*mid==num) return true;
            else if(mid*mid<num) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};