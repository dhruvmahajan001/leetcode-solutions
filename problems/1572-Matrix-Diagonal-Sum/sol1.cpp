// ==========================================================
// 1572. Matrix Diagonal Sum
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 14.8 MB (Beats 99%)
// Link       : https://leetcode.com/problems/matrix-diagonal-sum/
// ==========================================================

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+mat[i][i];
            sum=sum+mat[i][n-1-i];
        }
        if(n%2==1){
            sum=sum-mat[n/2][n/2];
        }
        return sum;
    }
};