// ==========================================================
// 709. To Lower Case
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.3 MB (Beats 53%)
// Link       : https://leetcode.com/problems/to-lower-case/
// ==========================================================

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};