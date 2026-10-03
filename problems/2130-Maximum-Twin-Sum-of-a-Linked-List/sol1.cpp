// ==========================================================
// 2130. Maximum Twin Sum of a Linked List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 8 ms (Beats 25%)
// Memory     : 124.4 MB (Beats 66%)
// Link       : https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
// ==========================================================

class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = slow;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        int ans = 0;
        ListNode* first = head;
        ListNode* second = prev;
        while (second != NULL) {
            ans = max(ans, first->val + second->val);
            first = first->next;
            second = second->next;
        }
        return ans;
    }
};