// ==========================================================
// 1200. Minimum Absolute Difference
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 16 ms (Beats 48%)
// Memory     : 36.7 MB (Beats 46%)
// Link       : https://leetcode.com/problems/minimum-absolute-difference/
// ==========================================================

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mn=INT_MAX;
        vector<vector<int>>ans;
        
        for(int i=1;i<arr.size();i++)
            mn=min(mn,arr[i]-arr[i-1]);
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==mn)
                ans.push_back({arr[i-1],arr[i]});
        }
        
        return ans;
    }
};