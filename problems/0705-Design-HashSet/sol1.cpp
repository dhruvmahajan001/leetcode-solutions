// ==========================================================
// 705. Design HashSet
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 13 ms (Beats 62%)
// Memory     : 49.7 MB (Beats 53%)
// Link       : https://leetcode.com/problems/design-hashset/
// ==========================================================

class MyHashSet {
public:
vector<bool> st;
    MyHashSet() {
        st.resize(1000001,false);
    }
    
    void add(int key) {
        st[key]=true;
    }
    
    void remove(int key) {
        st[key]=false;
    }
    
    bool contains(int key) {
        return st[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */