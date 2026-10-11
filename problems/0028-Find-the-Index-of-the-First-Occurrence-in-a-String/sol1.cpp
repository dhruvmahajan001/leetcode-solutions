// ==========================================================
// 28. Find the Index of the First Occurrence in a String
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 19 ms (Beats 15%)
// Memory     : 72.8 MB (Beats 5%)
// Link       : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// ==========================================================

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.size(); i++)
            if(haystack.substr(i, needle.size()) == needle)
                return i;
        return -1;
    }
};