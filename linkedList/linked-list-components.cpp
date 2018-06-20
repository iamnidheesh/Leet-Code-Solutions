class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        
        int ans = 0;
        sort(G.begin(),G.end());
        while(head != NULL) {
            bool flag = false;
            while(head != NULL && binary_search(G.begin(),G.end(),head->val)) {
                head = head->next;
                flag = true;
            }
            if(flag) {
                ans++;
            }
            else {
                head = head->next;
            }
        }
        return ans;
    }
};