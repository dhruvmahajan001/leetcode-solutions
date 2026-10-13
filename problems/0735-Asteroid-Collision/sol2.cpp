// ==========================================================
// 735. Asteroid Collision
// Difficulty : Medium
// Language   : C++
// Solution   : #2
// Runtime    : 7 ms (Beats 6%)
// Memory     : 22.1 MB (Beats 56%)
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
