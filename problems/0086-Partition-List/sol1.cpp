// ==========================================================
// 86. Partition List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 15 MB (Beats 12%)
// Link       : https://leetcode.com/problems/partition-list/
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* gDummy=new ListNode(0);
        ListNode* lDummy=new ListNode(0);
        ListNode* ltail=lDummy;
        ListNode* gtail=gDummy;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=NULL;
            if(curr->val<x){
                ltail->next=curr;
                ltail=curr;
            }
            else{
                gtail->next=curr;
                gtail=curr;
            }
            curr=next;
        }
        ltail->next=gDummy->next;
        return lDummy->next;
    }
};