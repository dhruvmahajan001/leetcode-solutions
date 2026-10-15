// ==========================================================
// 232. Implement Queue using Stacks
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 10 MB (Beats 99%)
// Link       : https://leetcode.com/problems/implement-queue-using-stacks/
// ==========================================================

class MyQueue {
public:
    stack<int> inStack;
    stack<int> outStack;

    MyQueue() {
    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        peek();
        int x=outStack.top();
        outStack.pop();
        return x;
    }

    int peek() {
        if(outStack.empty()){
            while(!inStack.empty()){
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */