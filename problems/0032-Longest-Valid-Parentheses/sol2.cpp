// ==========================================================
// 32. Longest Valid Parentheses
// Difficulty : Hard
// Language   : C++
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.9 MB (Beats 14%)
// Link       : https://leetcode.com/problems/longest-valid-parentheses/
// ==========================================================

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int ans=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();

                if(st.empty()){
                    st.push(i);
                }
                else{
                    ans=max(ans,i-st.top());
                }
            }
        }

        return ans;
        // int left=0,right=0,ans=0;

        // for(char c:s){
        //     if(c=='(') left++;
        //     else right++;

        //     if(left==right)
        //         ans=max(ans,2*right);
        //     else if(right>left)
        //         left=right=0;
        // }

        // left=right=0;

        // for(int i=s.size()-1;i>=0;i--){
        //     if(s[i]=='(') left++;
        //     else right++;

        //     if(left==right)
        //         ans=max(ans,2*left);
        //     else if(left>right)
        //         left=right=0;
        // }

        // return ans;
    }
};