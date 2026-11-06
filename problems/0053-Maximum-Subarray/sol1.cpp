// ==========================================================
// 53. Maximum Subarray
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 1 ms (Beats 31%)
// Memory     : 71.6 MB (Beats 73%)
// Link       : https://leetcode.com/problems/maximum-subarray/
// ==========================================================

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int currSum=nums[0];
      int maxSum=nums[0];
      for(int i=1;i<nums.size();i++){
        currSum=max(nums[i],currSum+nums[i]);
        maxSum=max(currSum,maxSum);
      }
      return maxSum;
    }
};



    //Brute Force Approach
/*
#include <iostream>   
using namespace std;

int main(){
  int n=5;
  int arr[n]={-1,-2,-4,4,5};

  int maxsum=INT_MIN;

  for(int st=0;st<n;st++){
     int currsum=0;
     for(int end=st;end<n;end++){
      currsum+=arr[end];
      maxsum=max(currsum,maxsum);
     }

  }

cout<<"Max subarray sum= "<<maxsum;

return 0;
}*/