// ==========================================================
// 11. Container With Most Water
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 2 ms (Beats 40%)
// Memory     : 62.8 MB (Beats 85%)
// Link       : https://leetcode.com/problems/container-with-most-water/
// ==========================================================

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1,ans=0;
        while(lp<rp){
            int w= rp-lp;
            int ht=min(height[lp],height[rp]);
            int curr=w*ht;
            ans=max(ans,curr);
        
        if(height[lp]<height[rp]){
            lp++;
        }
        else{
            rp--;
        }
        }
        return ans;
        
    }
};