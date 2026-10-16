// ==========================================================
// 1249. Minimum Remove to Make Valid Parentheses
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 9 ms (Beats 48%)
// Memory     : 14.5 MB (Beats 42%)
// Link       : https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
// ==========================================================

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        unordered_set<int> remove;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.empty()){
                    remove.insert(i);
                }
                else{
                    st.pop();
                }
            }
        }

        while(!st.empty()){
            remove.insert(st.top());
            st.pop();
        }

        string ans="";
        for(int i=0;i<s.size();i++){
            if(!remove.count(i)){
                ans+=s[i];
            }
        }

        return ans;
    }
};