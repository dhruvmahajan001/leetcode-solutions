// ==========================================================
// 148. Sort List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 91 ms (Beats 5%)
// Memory     : 86.5 MB (Beats 5%)
// Link       : https://leetcode.com/problems/sort-list/
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

    // Merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (left != NULL && right != NULL) {

            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
            }
            else {
                tail->next = right;
                right = right->next;
            }

            tail = tail->next;
        }

        if (left != NULL)
            tail->next = left;
        else
            tail->next = right;

        ListNode* result = dummy->next;

        delete dummy;

        return result;
    }

    ListNode* sortList(ListNode* head) {

        // Base case
        if (head == NULL || head->next == NULL)
            return head;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split
        ListNode* second = slow->next;
        slow->next = NULL;

        // Sort both halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(second);

        // Merge sorted halves
        return merge(left, right);
    }
};