// ==========================================================
// 23. Merge k Sorted Lists
// Difficulty : Hard
// Language   : C++
// Solution   : #1
// Runtime    : 3 ms (Beats 63%)
// Memory     : 19.3 MB (Beats 8%)
// Link       : https://leetcode.com/problems/merge-k-sorted-lists/
// ==========================================================

class Solution {
public:

    ListNode* merge(ListNode* left, ListNode* right) {

        ListNode dummy(0);
        ListNode* curr = &dummy;

        while (left && right) {

            if (left->val <= right->val) {
                curr->next = left;
                left = left->next;
            }
            else {
                curr->next = right;
                right = right->next;
            }

            curr = curr->next;
        }

        if (left)
            curr->next = left;

        if (right)
            curr->next = right;

        return dummy.next;
    }


    ListNode* sortList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* right = slow->next;
        slow->next = nullptr;

        ListNode* left = sortList(head);
        right = sortList(right);

        return merge(left, right);
    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.empty())
            return NULL;

        ListNode* head = NULL;
        ListNode* tail = NULL;

        // Connect all non-empty lists
        for (int i = 0; i < lists.size(); i++) {

            if (lists[i] == NULL)
                continue;

            if (head == NULL) {
                head = lists[i];
                tail = lists[i];
            }
            else {
                while (tail->next != NULL)
                    tail = tail->next;

                tail->next = lists[i];
            }
        }

        // Sort the combined list
        return sortList(head);
    }
};