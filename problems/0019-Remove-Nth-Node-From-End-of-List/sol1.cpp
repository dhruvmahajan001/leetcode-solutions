// ==========================================================
// 19. Remove Nth Node From End of List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 15.1 MB (Beats 26%)
// Link       : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(n--){
            fast=fast->next;
        }
        if(fast==NULL){
            return head->next;
        }
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode *del=slow->next;
        slow->next=slow->next->next;
        delete del;
        return head;
        
    }
};