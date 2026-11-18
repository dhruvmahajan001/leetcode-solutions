// ==========================================================
// 1441. Build an Array With Stack Operations
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 10.6 MB (Beats 90%)
// Link       : https://leetcode.com/problems/build-an-array-with-stack-operations/
// ==========================================================

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
     int j=0;
     vector<string>ans;
        for(int i=1;i<=n&&j<target.size();i++){
            ans.push_back("Push");
            if(i==target[j]){
                j++;
            
            }
            else{
                ans.push_back("Pop");
            }
            

        }
        return ans;
      
        
    }
};