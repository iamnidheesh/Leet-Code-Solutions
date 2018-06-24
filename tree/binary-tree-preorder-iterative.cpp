class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        if(root == NULL)
            return ans;
        stack <TreeNode *> st;
        st.push(root);
        while(!st.empty()) {
            
            TreeNode * curr = st.top();
            ans.push_back(curr->val);
            st.pop();
            if(curr->right != NULL) {
                st.push(curr->right);
            }
            if(curr->left != NULL) {
                st.push(curr->left);
            }
          
        }
        return ans;
    }
};