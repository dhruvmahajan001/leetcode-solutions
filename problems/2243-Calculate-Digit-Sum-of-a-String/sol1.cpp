// ==========================================================
// 2243. Calculate Digit Sum of a String
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 1 ms (Beats 27%)
// Memory     : 8.9 MB (Beats 86%)
// Link       : https://leetcode.com/problems/calculate-digit-sum-of-a-string/
// ==========================================================


class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k) {
            string temp = "";
            for(int i = 0; i < s.length(); i += k) {
                int sum = 0;
                for(int j = i; j < min(i + k, (int)s.length()); j++) {
                    sum += s[j] - '0';
                }
                temp += to_string(sum);
            }
            s = temp;
        }
        return s;
    }
};
