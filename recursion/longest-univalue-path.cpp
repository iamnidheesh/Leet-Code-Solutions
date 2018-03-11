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
    int ans = 0;
    int findPath(TreeNode *root) {
        if(root == NULL)
            return 0;
        int l = 0,r = 0;
        if(root->left != NULL && root->left->val == root->val) {
            l = 1 + findPath(root->left);
        }
        if(root->right != NULL && root->right->val == root->val) {
            r = 1 + findPath(root->right);
        }
        return max(l,r);
    }
    int maxPath(TreeNode *root) {
        int ret = 0;
        if(root->left != NULL)
            if(root->left->val == root->val) {
                ret = 1 + findPath(root->left);
            }
        if(root->right != NULL) 
            if(root->right->val == root->val) {
                ret += 1 + findPath(root->right);
            }
        return ret;
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root == NULL)
            return 0;
        ans = max(ans,maxPath(root));
        longestUnivaluePath(root->left);
        longestUnivaluePath(root->right);
        return ans;
    }
};