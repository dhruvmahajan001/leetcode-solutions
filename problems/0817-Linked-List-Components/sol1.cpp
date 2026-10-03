// ==========================================================
// 817. Linked List Components
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 4 ms (Beats 79%)
// Memory     : 25.5 MB (Beats 36%)
// Link       : https://leetcode.com/problems/linked-list-components/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        ListNode* curr = head;

        while (curr != NULL) {
            if (st.count(curr->val)) {
                ans++;
                while (curr->next!= NULL && st.count(curr->next->val)) {
                    curr = curr->next;
                }
            }
            curr = curr->next;
        }
        return ans;
    }
};