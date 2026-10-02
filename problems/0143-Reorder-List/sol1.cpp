// ==========================================================
// 143. Reorder List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 22.8 MB (Beats 51%)
// Link       : https://leetcode.com/problems/reorder-list/
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
    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
 ListNode* sec = slow->next;
        slow->next = NULL;
        ListNode*curr=sec;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode*fir=head;
        sec=prev;
        while(fir!=NULL&&sec!=NULL){
        ListNode*firnext=fir->next;
        ListNode*secnext=sec->next;
            fir->next=sec;
            sec->next=firnext;
           fir=firnext;
           sec=secnext;
        }
       
        
    }
};