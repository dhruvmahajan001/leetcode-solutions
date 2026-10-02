// ==========================================================
// 237. Delete Node in a Linked List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 10 ms (Beats 35%)
// Memory     : 12.4 MB (Beats 22%)
// Link       : https://leetcode.com/problems/delete-node-in-a-linked-list/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       
       node->val=node->next->val;
       node->next=node->next->next;


       
    }
};