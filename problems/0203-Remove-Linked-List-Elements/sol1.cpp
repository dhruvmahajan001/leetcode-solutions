// ==========================================================
// 203. Remove Linked List Elements
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 20 MB (Beats 68%)
// Link       : https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
     ListNode* dummy=new ListNode(0);
     dummy->next = head;
     ListNode* curr=dummy;   
     while(curr->next!=NULL){
        if(curr->next->val==val){
            curr->next=curr->next->next;
            
        }
        else{
            curr=curr->next;
        }
     }
     return dummy->next;
    }
};