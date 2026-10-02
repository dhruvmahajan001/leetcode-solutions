// ==========================================================
// 2095. Delete the Middle Node of a Linked List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 311.9 MB (Beats 84%)
// Link       : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL)
    return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev = NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
      
        prev->next=slow->next;
        delete slow;
    
   
        return head;
       
    }
};