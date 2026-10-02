// ==========================================================
// 2487. Remove Nodes From Linked List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 4 ms (Beats 79%)
// Memory     : 161.2 MB (Beats 92%)
// Link       : https://leetcode.com/problems/remove-nodes-from-linked-list/
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
ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        int maxVal = INT_MIN;
        ListNode* curr = head;
        ListNode* prev = NULL;
           while (curr != NULL) {
            if (curr->val < maxVal) {
                prev->next = curr->next;
                curr = curr->next;
            }
            else {
                maxVal = curr->val;
                prev = curr;
                curr = curr->next;
            }
        }

      
        return reverse(head);
    }
};