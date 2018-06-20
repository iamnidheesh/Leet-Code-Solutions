/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int lenA = 0,lenB = 0,diff;
        ListNode *temp = headA;
        while(temp != NULL) {
            temp = temp->next;
            lenA++;
        }
        temp = headB;
        while(temp != NULL) {
            temp = temp->next;
            lenB++;
        }
        if(lenA > lenB) {
            diff = lenA - lenB;
            while(diff--) {
                headA = headA->next;
            }
        }
        else {
            diff = lenB - lenA;
            while(diff--) {
                headB = headB->next;
            }
        }
        while(headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};