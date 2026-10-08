// ==========================================================
// 1021. Remove Outermost Parentheses
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.9 MB (Beats 54%)
// Link       : https://leetcode.com/problems/remove-outermost-parentheses/
// ==========================================================

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;

        for(char c:s){
            if(c=='('){
                if(count>0) ans+=c;
                count++;
            }
            else{
                count--;
                if(count>0) ans+=c;
            }
        }

        return ans;
    }
};