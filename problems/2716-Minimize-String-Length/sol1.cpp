// ==========================================================
// 2716. Minimize String Length
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 4 ms (Beats 84%)
// Memory     : 12.8 MB (Beats 78%)
// Link       : https://leetcode.com/problems/minimize-string-length/
// ==========================================================

class Solution {
public:
    int minimizedStringLength(string s) {
        int freq[26]={0};
        int count=0;
        for(char c:s){
            if(!freq[c-'a']){
                freq[c-'a']=1;
                count++;
            }
        }
        return count;

    }
};