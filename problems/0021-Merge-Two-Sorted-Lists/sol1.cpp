// ==========================================================
// 21. Merge Two Sorted Lists
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 19.6 MB (Beats 27%)
// Link       : https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*p1=list1;
        ListNode*p2=list2;
        ListNode* dummy=new ListNode(0);
        ListNode*temp=dummy;
        while(p1!=NULL && p2!=NULL){
            if(p1->val<=p2->val){
                temp->next=p1;
                p1=p1->next;
            }
            else{
                 temp->next=p2;
                p2=p2->next;
            }
            temp=temp->next;

        }
        if(p1!=NULL){
            temp->next=p1;
        }
        else{
            temp->next=p2;
        }
        return dummy->next;
        }
    
};
// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

//     if(list1 == NULL)
//         return list2;

//     if(list2 == NULL)
//         return list1;

//     if(list1->val <= list2->val) {
//         list1->next = mergeTwoLists(list1->next, list2);
//         return list1;
//     }
//     else {
//         list2->next = mergeTwoLists(list1, list2->next);
//         return list2;
//     }
// }