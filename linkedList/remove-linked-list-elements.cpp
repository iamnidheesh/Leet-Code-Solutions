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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode * temp = head ,*prev;
        while(temp != NULL) {
            if(temp == head && head->val == val) {
                head = head->next;
                free(temp);
                temp = head;
            }
            else {
                if(temp->val == val) {
                    prev->next = temp->next;
                    free(temp);
                    temp = prev->next;
                }
                else {
                    prev = temp;
                    temp = temp->next;
                }
                
              
            }
    
        }
        return head;
    }
};