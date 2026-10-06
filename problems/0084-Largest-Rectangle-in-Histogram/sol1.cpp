// ==========================================================
// 84. Largest Rectangle in Histogram
// Difficulty : Hard
// Language   : C++
// Solution   : #1
// Runtime    : 11 ms (Beats 94%)
// Memory     : 81.4 MB (Beats 60%)
// Link       : https://leetcode.com/problems/largest-rectangle-in-histogram/
// ==========================================================

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxArea=0;
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int mid=st.top();
                st.pop();

                int width;
                if(st.empty())
                    width=i;
                else
                    width=i-st.top()-1;

                maxArea=max(maxArea,heights[mid]*width);
            }
            st.push(i);
        }

        while(!st.empty()){
            int mid=st.top();
            st.pop();

            int width;
            if(st.empty())
                width=n;
            else
                width=n-st.top()-1;

            maxArea=max(maxArea,heights[mid]*width);
        }

        return maxArea;
    
        // int maxArea=0;
        // for(int i=0;i<n;i++){
        //      int left=i;
        //     int right=i;

        // while(left>=0 && heights[left]>=heights[i])
        //     left--;

        // while(right<n && heights[right]>=heights[i])
        //     right++;

        // int width=right-left-1;
        // int area=heights[i]*width;
        // maxArea=max(maxArea,area);

        // }
        // return maxArea;

    }
};