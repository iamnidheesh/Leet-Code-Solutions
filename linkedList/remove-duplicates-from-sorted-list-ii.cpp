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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp = head , *prev = NULL;
        bool flag = false;
        while(temp != NULL) {
           
            if(temp->next != NULL && temp->next->val == temp->val) {
                flag = true;
                if(temp == head) {
                    head = head->next;
                    free(temp);
                    temp = head;
                }
                else {
                    prev->next = temp->next;
                    free(temp);
                    temp = prev->next;
                }
            }
            else if(flag == true) {
                flag = false;
                if(temp == head) {
                    head = head->next;
                    free(temp);
                    temp = head;
                }
                else {
                    prev->next = temp->next;
                    free(temp);
                    temp = prev->next;
                }
            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};