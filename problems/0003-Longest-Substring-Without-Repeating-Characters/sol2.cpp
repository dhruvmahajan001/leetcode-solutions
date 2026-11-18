// ==========================================================
// 3. Longest Substring Without Repeating Characters
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 334 ms (Beats 17%)
// Memory     : 81.4 MB (Beats 20%)
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