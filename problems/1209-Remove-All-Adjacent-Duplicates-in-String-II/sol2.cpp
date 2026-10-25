// ==========================================================
// 1209. Remove All Adjacent Duplicates in String II
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 21 ms (Beats 8%)
// Memory     : 17.7 MB (Beats 8%)
// Link       : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
// ==========================================================

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
      
        for(int i=0;i<s.size();i++){
           int count=1;
           if(!st.empty() && s[i]==st.top().first){
                count=st.top().second+1;;    
            }
            st.push({s[i],count});
            if(st.top().second==k){
                 for(int j = 0; j < k; j++) {
                    st.pop();
                }
            }
        }        
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};