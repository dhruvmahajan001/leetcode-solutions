// ==========================================================
// 1721. Swapping Nodes in a Linked List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 185.1 MB (Beats 68%)
// Link       : https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode*temp=head;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(k--) fast=fast->next;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        swap(temp->val,slow->val);
        return head;


    }
};