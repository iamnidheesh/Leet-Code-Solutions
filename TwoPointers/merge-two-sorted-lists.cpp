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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* head = NULL;
        if(l1 != NULL && l2 != NULL)
        	if(l1->val <= l2->val) {
        		head = new ListNode(l1->val);
        		l1 = l1->next;
        	}
        	else {
        		head = new ListNode(l2->val);
        		l2 = l2->next;
        	}
     	else if(l1 != NULL) {
     		head = new ListNode(l1->val);
     		l1 = l1->next;
     	}
     	else if(l2 != NULL) {
     		head = new ListNode(l2->val);
     		l2 = l2->next;
     	}
     	else
     		return NULL;
        
     	ListNode* temp = head;
     	while(l1 != NULL && l2 != NULL) {
     		if(l1->val <= l2->val) {
        		temp->next = new ListNode(l1->val);
        		l1 = l1->next;
        	}
        	else {
        		temp->next = new ListNode(l2->val);
        		l2 = l2->next;
        	}
        	temp = temp->next;
     	}
     	while(l1 != NULL) {
     		temp->next = new ListNode(l1->val);
     		l1 = l1->next;
     		temp = temp->next;
     	}
     	while(l2 != NULL) {
     		temp->next = new ListNode(l2->val);
     		l2 = l2->next;
     		temp = temp->next;
     	}
     	return head;

    }
};