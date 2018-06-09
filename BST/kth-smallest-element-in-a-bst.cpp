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
    bool flag = false;
    int x = 0,ans = 0;
    void inorder(TreeNode* root) {
    	if(root == NULL || flag)
    		return;
    	inorder(root->left);
        x++;
        if(x == ans) {
            flag = true;
            ans = root->val;
        }
    	inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        ans = k;
        inorder(root);
        return ans;
    }
};