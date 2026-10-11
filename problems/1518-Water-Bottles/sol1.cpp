// ==========================================================
// 1518. Water Bottles
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 7.8 MB (Beats 81%)
// Link       : https://leetcode.com/problems/water-bottles/
// ==========================================================

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles+(numBottles-1)/(numExchange-1);
    }
};