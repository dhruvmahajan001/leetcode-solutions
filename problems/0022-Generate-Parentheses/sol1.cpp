// ==========================================================
// 22. Generate Parentheses
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 3 ms (Beats 66%)
// Memory     : 15.9 MB (Beats 29%)
// Link       : https://leetcode.com/problems/generate-parentheses/
// ==========================================================

class Solution {
public:
    vector<string> ans;

    void solve(string s,int open,int close,int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }

        if(open<n)
            solve(s+"(",open+1,close,n);

        if(close<open)
            solve(s+")",open,close+1,n);
    }

    vector<string> generateParenthesis(int n) {
        solve("",0,0,n);
        return ans;
    }
};