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
    bool hasCycle(ListNode *head) {
  		bool flag  = false;
  		map <ListNode*,int> m;
  		m[head] = 1;
  		while(head != NULL) {
  			head = head->next;
  			if(m[head]) {
  				flag = true;
  				break;
  			}
  			m[head] = 1;
  			
  		}
  		return flag;      
    }
};