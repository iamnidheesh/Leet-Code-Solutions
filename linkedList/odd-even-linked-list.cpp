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
    void insertEnd(ListNode ** head,ListNode ** end,int x) {
        
        ListNode *node = new ListNode(x);
        if(*head == NULL) {
            *head = node;
            *end = node;
            return;
        }
        (*end)->next = node;
        *end = node;
    }
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* odd = head;
        ListNode* even = NULL;
        ListNode* end = NULL, *temp = odd,*prev = NULL,*del = NULL;
        while(temp && temp->next) {
            insertEnd(&even,&end,temp->next->val);
            del = temp->next;
            prev = temp;
            temp->next = temp->next->next;
            free(del);
            temp = temp->next;
        }
        if(temp == NULL) {
            prev->next = even;
        }
        else {
            temp->next = even;
        }
        return odd;
    }
};