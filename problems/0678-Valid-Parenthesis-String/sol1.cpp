// ==========================================================
// 678. Valid Parenthesis String
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.3 MB (Beats 24%)
// Link       : https://leetcode.com/problems/valid-parenthesis-string/
// ==========================================================

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> star;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open.push(i);
            else if(s[i]=='*') star.push(i);
            else{
                if(!open.empty())
                    open.pop();
                else if(!star.empty())
                    star.pop();
                else
                    return false;
            }
        }
        while(!open.empty()&&!star.empty()){
            if(open.top()>star.top())
                return false;
            open.pop();
            star.pop();
        }

        return open.empty();
    }
};