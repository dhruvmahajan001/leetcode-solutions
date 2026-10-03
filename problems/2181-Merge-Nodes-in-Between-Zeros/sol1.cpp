// ==========================================================
// 2181. Merge Nodes in Between Zeros
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 52 ms (Beats 53%)
// Memory     : 295.4 MB (Beats 19%)
// Link       : https://leetcode.com/problems/merge-nodes-in-between-zeros/
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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* curr = head->next;
        ListNode* newHead = nullptr;
        ListNode* tail = nullptr;

        int sum = 0;

        while (curr!=NULL) {
            if (curr->val!= 0) {
                sum+=curr->val;
            }
            else {
                ListNode* newNode = new ListNode(sum);
                if (newHead == nullptr) {
                    newHead = newNode;
                    tail = newNode;
                }
                else {
                    tail->next = newNode;
                    tail = newNode;
                }
                sum = 0;
            }
            curr = curr->next;
        }

        return newHead;
    }
};