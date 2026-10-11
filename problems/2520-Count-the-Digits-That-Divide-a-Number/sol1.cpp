// ==========================================================
// 2520. Count the Digits That Divide a Number
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 7.8 MB (Beats 73%)
// Link       : https://leetcode.com/problems/count-the-digits-that-divide-a-number/
// ==========================================================

class Solution {
public:
    int countDigits(int num) {
        int sum=0;
        int ans=0;
        int n=num;
        while(num!=0){
            int d=num%10;
            if(n%d==0) ans++;
            num/=10;
        }
        return ans;
    }
};