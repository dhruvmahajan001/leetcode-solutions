// ==========================================================
// 735. Asteroid Collision
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 22.3 MB (Beats 17%)
// Link       : https://leetcode.com/problems/asteroid-collision/
// ==========================================================


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for(int s:asteroids){
            bool alive=true;
            while(!st.empty() && s<0 && st.top()>0){
                if(st.top()<abs(s)){
                    st.pop();
                }
                else if(st.top()==abs(s)){
                    st.pop();
                    alive=false;
                    break;
                }
                else{
                    alive=false;
                    break;
                }
            }
            if(alive) st.push(s);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
