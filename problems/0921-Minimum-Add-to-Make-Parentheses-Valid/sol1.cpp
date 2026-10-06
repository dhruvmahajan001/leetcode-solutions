// ==========================================================
// 921. Minimum Add to Make Parentheses Valid
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.3 MB (Beats 96%)
// Link       : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// ==========================================================

class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int min = 0;
        for (char c : s) {
            if (c == '(') {
                open++;
            }
             else {
                if(open>0){
                    open--;
                }
                else{
                    min++;
                }
            }
        }
        return open+min;
    }
};