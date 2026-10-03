// ==========================================================
// 1019. Next Greater Node In Linked List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 896 ms (Beats 9%)
// Memory     : 45.6 MB (Beats 67%)
// Link       : https://leetcode.com/problems/next-greater-node-in-linked-list/
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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;

        while (temp != NULL) {
            ListNode* curr = temp->next;
            int greater = 0;
            while (curr != NULL) {
                if (curr->val > temp->val) {
                    greater = curr->val;
                    break;
                }
                curr = curr->next;
            }
            ans.push_back(greater);
            temp = temp->next;
        }
        return ans;
    }
};