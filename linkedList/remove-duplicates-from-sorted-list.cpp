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
        while(temp != NULL) {
            if(prev != NULL && prev->val == temp->val) {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};