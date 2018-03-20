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
    ListNode* detectCycle(ListNode *head) {
  		bool flag  = false;
  		map <ListNode*,int> m;
      head->val = INT_MIN;
  		while(head != NULL) {
  			head = head->next;
  			if(head->val == INT_MIN) {
  				return head;
  			}
  			head->val = INT_MIN;
  			
  		}
  		return NULL;      
    }
};