// ==========================================================
// 1669. Merge In Between Linked Lists
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 196 ms (Beats 66%)
// Memory     : 99.3 MB (Beats 84%)
// Link       : https://leetcode.com/problems/merge-in-between-linked-lists/
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1==NULL) return list2;
        else if(list2==NULL) return list1;
        ListNode* start=list1;
        ListNode* end= list1;
        ListNode* temp=list2;
        for(int i=1;i<a;i++){
            start=start->next;
        }
         for(int i=1;i<=b+1;i++){
            end=end->next;
        }
        start->next=list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=end;
 return list1;
    }
   
};