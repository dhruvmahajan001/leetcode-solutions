// ==========================================================
// 84. Largest Rectangle in Histogram
// Difficulty : Hard
// Language   : C++
// Solution   : #2
// Runtime    : 28 ms (Beats 33%)
// Memory     : 85.4 MB (Beats 42%)
// Link       : https://leetcode.com/problems/largest-rectangle-in-histogram/
// ==========================================================

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& h) {
//         stack<int>st;
//         int n=h.size();
//         int maxArea=0;
//         for(int i=0;i<h.size();i++){
//             while(!st.empty()&&h[st.top()]>h[i]){
//                 int mid=st.top();
//                 st.pop();
//                 int width;
//                 if(st.empty()){
//                     width=i;
//                 }
//                 else{
//                  width=   i-st.top()-1;
                
//                 }      
//                 maxArea=max(maxArea,h[mid]*width);
//             }
//             st.push(i);
//         }
//         while(!st.empty()){
//             int mid=st.top();
//             st.pop();
//             int width;
//             if(st.empty()){
//                 width=n;
//             }
//             else{
//                 width=n-st.top()-1;
//             }
//             maxArea=max(maxArea,h[mid]*width);

//         }
//         return maxArea;

// //   int ans=INT_MIN;
// //     for(int i=0;i<h.size();i++){
      
// //         int left=i;
// //         int right=i;
// //        while(left>=0&&h[i]<=h[left]){
// //         left--;
// //        }
// //        while(right<h.size()&&h[i]<=h[right]){
// //         right++;
// //        }
// //     int width=right-left-1;
// //     int area=h[i]*width;
// //     ans=max(ans,area);
    

// //     }
    
// //         return ans;
//     }
// };


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> left(n);
        vector<int> right(n);

        stack<int> st;

        // 1. Find Previous Smaller Element (PSE)
        for(int i = 0; i < n; i++) {

            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(st.empty()) {
                left[i] = -1;
            }
            else {
                left[i] = st.top();
            }

            st.push(i);
        }

        // Clear stack
        while(!st.empty()) {
            st.pop();
        }

        // 2. Find Next Smaller Element (NSE)
        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(st.empty()) {
                right[i] = n;
            }
            else {
                right[i] = st.top();
            }

            st.push(i);
        }

        // 3. Calculate maximum area
        int maxArea = 0;

        for(int i = 0; i < n; i++) {

            int width = right[i] - left[i] - 1;

            int area = heights[i] * width;

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
