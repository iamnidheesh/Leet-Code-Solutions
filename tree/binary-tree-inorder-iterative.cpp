/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack <TreeNode*> st;
        vector <int> ans;
        if(root == NULL)
            return ans;
        map <TreeNode*,int> m;
        st.push(root);
        m[root] = 1;
        while(!st.empty()) {
            
            TreeNode * curr = st.top();
            if(curr->left != NULL)
                curr = curr->left;
            while(curr != NULL && !m[curr]) {
                st.push(curr);
                m[curr] = 1;
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);
            if(curr->right != NULL && !m[curr->right]) {
                st.push(curr->right);
                m[curr->right] = 1;
            }
        }
        return ans;
    }
};