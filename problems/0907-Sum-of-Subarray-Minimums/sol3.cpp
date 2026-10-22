// ==========================================================
// 907. Sum of Subarray Minimums
// Difficulty : Medium
// Language   : C++
// Solution   : #3
// Runtime    : 78 ms (Beats 42%)
// Memory     : 193.2 MB (Beats 86%)
// Link       : https://leetcode.com/problems/sum-of-subarray-minimums/
// ==========================================================

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> left(n),right(n);
        stack<int> st;
        long long ans=0;
        int mod=1e9+7;

        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i])
                st.pop();

            if(st.empty())
                left[i]=-1;
            else
                left[i]=st.top();

            st.push(i);
        }

        while(!st.empty())
            st.pop();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();

            if(st.empty())
                right[i]=n;
            else
                right[i]=st.top();

            st.push(i);
        }

        for(int i=0;i<n;i++){
            long long l=i-left[i];
            long long r=right[i]-i;

            ans=(ans+(arr[i]*l%mod)*r)%mod;
        }

        return ans;
    }
};