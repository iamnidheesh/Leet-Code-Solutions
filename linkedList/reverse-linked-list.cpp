class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode * temp = head;
        ListNode *prev = NULL,*next = NULL;
        while(temp != NULL) {
            
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        head = prev;
        return head;
    }
};