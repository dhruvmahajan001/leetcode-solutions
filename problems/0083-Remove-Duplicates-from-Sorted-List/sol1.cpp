// ==========================================================
// 83. Remove Duplicates from Sorted List
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 16.3 MB (Beats 33%)
// Link       : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
        ListNode *temp=head;
        while(temp!=NULL && temp->next!=NULL){
            
            if(temp->next->val==temp->val){
                temp->next=temp->next->next;
            }
            else{
            temp=temp->next;
        }
        }
        return head;
    }
};