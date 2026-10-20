// ==========================================================
// 29. Divide Two Integers
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 1 ms (Beats 13%)
// Memory     : 8.5 MB (Beats 72%)
// Link       : https://leetcode.com/problems/divide-two-integers/
// ==========================================================

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long ans = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            ans += multiple;
        }

        if ((dividend < 0) != (divisor < 0))
            ans = -ans;

        return ans;
    }
};