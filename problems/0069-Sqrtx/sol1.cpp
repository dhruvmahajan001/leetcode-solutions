// ==========================================================
// 69. Sqrt(x)
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 4 ms (Beats 19%)
// Memory     : 8.4 MB (Beats 86%)
// Link       : https://leetcode.com/problems/sqrtx/
// ==========================================================

class Solution {
public:
    int mySqrt(int x) {
        long long left = 1;
        long long right = x;
        int ans = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (mid * mid <= x) {
                ans = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return ans;
    }
};