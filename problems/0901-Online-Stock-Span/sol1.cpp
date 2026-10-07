// ==========================================================
// 901. Online Stock Span
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 26 ms (Beats 82%)
// Memory     : 102.3 MB (Beats 7%)
// Link       : https://leetcode.com/problems/online-stock-span/
// ==========================================================

class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }

    int next(int price) {
        int span=1;
        while(!st.empty() && st.top().first<=price){
            span=span+st.top().second;
            st.pop();
        }
        st.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */