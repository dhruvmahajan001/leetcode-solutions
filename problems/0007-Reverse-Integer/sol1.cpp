// ==========================================================
// 7. Reverse Integer
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 2 ms (Beats 51%)
// Memory     : 8.5 MB (Beats 81%)
// Link       : https://leetcode.com/problems/reverse-integer/
// ==========================================================

class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        while(x!=0){
            int digit = x % 10;
            ans = (ans * 10) + digit;
            x = x/10;
        }
        if(ans>=-pow(2,31) && ans<=pow(2,31)-1){
            return (int)ans;
        }
        else{
            return 0;
        }
    }
};