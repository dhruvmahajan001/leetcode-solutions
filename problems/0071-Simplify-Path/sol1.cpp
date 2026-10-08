// ==========================================================
// 71. Simplify Path
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 3 ms (Beats 64%)
// Memory     : 11.8 MB (Beats 45%)
// Link       : https://leetcode.com/problems/simplify-path/
// ==========================================================

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string x,ans="";
        stringstream ss(path);

        while(getline(ss,x,'/')){
            if(x==".."){
                if(!st.empty()) st.pop();
            }
            else if(x=="." || x=="")
            continue;
            else
            st.push(x);
        }

        vector<string> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());

        for(string x:v)
            ans+="/"+x;
        if(ans=="")
        return "/" ;
        else
        return ans;
    }
};