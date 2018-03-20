/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// O(n) time and O(1) space
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
        	return true;
        bool flag = true;
        ListNode* temp = head;
        vector <int> v;
        while(temp != NULL) {
        	v.push_back(temp->val);
        	temp = temp->next;
        }
        int l = 0,u = v.size()-1;
        while(l < u) {
        	if(v[l] == v[u]) {
        		l++;
        		u--;
        	}
        	else {
        		flag = false;
        		break;
        	}
        }
       
        
        return flag;

    }
};