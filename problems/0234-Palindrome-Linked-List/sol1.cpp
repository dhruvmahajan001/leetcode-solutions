// ==========================================================
// 234. Palindrome Linked List
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 9 ms (Beats 15%)
// Memory     : 126.6 MB (Beats 29%)
// Link       : https://leetcode.com/problems/palindrome-linked-list/
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
    bool ispalin(ListNode*&left, ListNode*right){
        if(right==NULL) return true;
        bool result=ispalin(left, right->next);
        if(!result){
            return false;
        }
        if(left->val!=right->val){
            return false;
        }
        left=left->next;
        return true;
     }
    bool isPalindrome(ListNode* head) {
        ListNode* left=head;
        bool ans=ispalin(left,head);
        return ans;
    }
};