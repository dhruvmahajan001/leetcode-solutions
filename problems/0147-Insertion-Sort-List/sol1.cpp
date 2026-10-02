// ==========================================================
// 147. Insertion Sort List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 14.7 MB (Beats 17%)
// Link       : https://leetcode.com/problems/insertion-sort-list/
// ==========================================================

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = head->next;
        ListNode* lastSorted = head;

        while (curr != NULL) {
            if (lastSorted->val <= curr->val) {
                lastSorted = curr;
                curr = curr->next;
            }
            else {
                ListNode* prev = dummy;

                while (prev->next->val <= curr->val) {
                    prev = prev->next;
                }
                lastSorted->next = curr->next;
                curr->next = prev->next;
                prev->next = curr;
                curr = lastSorted->next;
            }
        }

        ListNode* ans = dummy->next;
        delete dummy;

        return ans;
    }
};