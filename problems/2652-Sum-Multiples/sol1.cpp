// ==========================================================
// 2652. Sum Multiples
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.4 MB (Beats 83%)
// Link       : https://leetcode.com/problems/sum-multiples/
// ==========================================================

class Solution {
public:
    int sumOfMultiples(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if(i%3==0 || i%5==0 || i%7==0){
                ans=ans+i;
            }
        }
        return ans;
    }
};