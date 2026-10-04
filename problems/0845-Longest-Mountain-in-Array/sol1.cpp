// ==========================================================
// 845. Longest Mountain in Array
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 3 ms (Beats 24%)
// Memory     : 22.1 MB (Beats 100%)
// Link       : https://leetcode.com/problems/longest-mountain-in-array/
// ==========================================================

class Solution {
public:
    int longestMountain(vector<int>&arr){
        int n=arr.size();
        int ans=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                int l=i,r=i;
                while(l>0&&arr[l]>arr[l-1])l--;
                while(r<n-1&&arr[r]>arr[r+1])r++;
                ans=max(ans,r-l+1);
            }
        }
        return ans;
    }
};