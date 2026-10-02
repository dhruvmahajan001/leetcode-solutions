// ==========================================================
// 82. Remove Duplicates from Sorted List II
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 15.8 MB (Beats 45%)
// Link       : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy=new ListNode(0);
        ListNode *temp=dummy;
        ListNode *curr=head;
      
      while(curr!=NULL){
        if(curr->next!=NULL && curr->val==curr->next->val){
            while(curr->next!=NULL && curr->val==curr->next->val){
                curr=curr->next;
            }
            curr=curr->next;

        }
        else{
            temp->next=curr;
            temp=temp->next;
            curr=curr->next;
        }
      }
      temp->next=NULL;
      return dummy->next;
    }
};