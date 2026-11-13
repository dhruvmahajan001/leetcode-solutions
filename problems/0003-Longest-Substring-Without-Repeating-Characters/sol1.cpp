// ==========================================================
// 3. Longest Substring Without Repeating Characters
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 342 ms (Beats 12%)
// Memory     : 81.2 MB (Beats 31%)
// Link       : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// ==========================================================

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};