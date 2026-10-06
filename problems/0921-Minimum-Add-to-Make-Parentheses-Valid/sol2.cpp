// ==========================================================
// 921. Minimum Add to Make Parentheses Valid
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.5 MB (Beats 56%)
// Link       : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// ==========================================================

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count=0;
        if (s=="") return 0;
        for(char c:s){
            if(c=='(') st.push(c);
            else{
                if(st.empty()){
                    count++;
                }
               else{
                st.pop();
               }

            }
        }
        return st.size()+count;
        // int open = 0;
        // int min = 0;
        // for (char c : s) {
        //     if (c == '(') {
        //         open++;
        //     }
        //      else {
        //         if(open>0){
        //             open--;
        //         }
        //         else{
        //             min++;
        //         }
        //     }
        // }
        // return open+min;
    }
};