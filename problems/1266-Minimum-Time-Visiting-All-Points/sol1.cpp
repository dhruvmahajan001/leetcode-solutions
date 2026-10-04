// ==========================================================
// 1266. Minimum Time Visiting All Points
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 13.7 MB (Beats 87%)
// Link       : https://leetcode.com/problems/minimum-time-visiting-all-points/
// ==========================================================

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=1;i<points.size();i++){
            int x=abs(points[i][0]-points[i-1][0]);
            int y=abs(points[i][1]-points[i-1][1]);
            ans+=max(x,y);
        }
        return ans;
    }
};