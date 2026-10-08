// ==========================================================
// 394. Decode String
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 9.5 MB (Beats 37%)
// Link       : https://leetcode.com/problems/decode-string/
// ==========================================================

class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> st;
        string ans="";
        int num=0;

        for(char c:s){
            if(isdigit(c)){
                num=num*10+(c-'0');
            }
            else if(c=='['){
                nums.push(num);
                st.push(ans);
                num=0;
                ans="";
            }
            else if(c==']'){
                int x=nums.top();
                nums.pop();

                string temp=st.top();
                st.pop();

                while(x--){
                    temp+=ans;
                }

                ans=temp;
            }
            else{
                ans+=c;
            }
        }

        return ans;
    }
};