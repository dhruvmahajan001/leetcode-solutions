// ==========================================================
// 725. Split Linked List in Parts
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 13.6 MB (Beats 48%)
// Link       : https://leetcode.com/problems/split-linked-list-in-parts/
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        int n = 0;
        ListNode* curr = head;

        while (curr != nullptr) {
            n++;
            curr = curr->next;
        }

        int size = n / k;
        int extra = n % k;

        vector<ListNode*> ans;

        curr = head;

        for (int i = 0; i < k; i++) {

            ans.push_back(curr);

            int partSize = size;

            if (extra > 0) {
                partSize++;
                extra--;
            }

            for (int j = 1; j < partSize; j++) {
                curr = curr->next;
            }

            if (curr != nullptr) {
                ListNode* nextPart = curr->next;
                curr->next = nullptr;
                curr = nextPart;
            }
        }

        return ans;
    }
};