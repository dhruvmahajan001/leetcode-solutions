// ==========================================================
// 92. Reverse Linked List II
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 11.3 MB (Beats 38%)
// Link       : https://leetcode.com/problems/reverse-linked-list-ii/
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || left==right) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* before=dummy;
        for(int i=1; i<left;i++){
            before=before->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=before->next;
       for (int i = 0; i <= right - left; i++) {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
       before->next->next=curr;
       before->next=prev;


        return dummy->next;


    }
};