class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        
        vector <ListNode*> ans;
        ListNode* temp = root,*next = NULL;
        int len = 0;
        while(temp != NULL) {
            temp = temp->next;
            len++;
        }
        temp = root;
        if(k >= len) {
            while(temp != NULL) {
                next = temp->next;
                temp->next = NULL;
                ans.push_back(temp);
                temp = next;
            }
            for(int i = len;i < k;i++)
                ans.push_back(NULL);
        }
        else {
            
            int rem = len%k;
            for(int i = 0;i < k;i++) {
                ans.push_back(temp);
                for(int j = 0;j < len/k -1 + (rem > 0 ? 1:0) ;j++) {
                    temp = temp->next;
                }
                next = temp->next;
                temp->next = NULL;
                temp = next;
                rem--;
            }
        }
    return ans;
    }
};