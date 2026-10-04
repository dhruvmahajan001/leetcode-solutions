// ==========================================================
// 33. Search in Rotated Sorted Array
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 0 ms (Beats 100%)
// Memory     : 15.1 MB (Beats 70%)
// Link       : https://leetcode.com/problems/search-in-rotated-sorted-array/
// ==========================================================

class Solution {
public:
    int search(vector<int>&nums,int target){
        int l=0,r=nums.size()-1;

        while(l<=r){
            int mid=l+(r-l)/2;

            if(nums[mid]==target)
                return mid;

            if(nums[l]<=nums[mid]){
                if(nums[l]<=target&&target<nums[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(nums[mid]<target&&target<=nums[r])
                    l=mid+1;
                else
                    r=mid-1;
            }
        }

        return -1;
    }
};