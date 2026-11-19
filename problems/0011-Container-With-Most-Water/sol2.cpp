// ==========================================================
// 11. Container With Most Water
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 2 ms (Beats 40%)
// Memory     : 63.1 MB (Beats 6%)
// Link       : https://leetcode.com/problems/container-with-most-water/
// ==========================================================

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int area=0;
        while(left<right){
            int width=right-left;
            int length=min(height[left],height[right]);
            area = max(area, length * width);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return area;
    }
};