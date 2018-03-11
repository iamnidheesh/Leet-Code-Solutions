/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// O(N) time , O(Height) space
// post order traversal is the best choice for doing these type of problems , bottom-up traversal of tree 
// (very important).
class Solution {
public:
    int ans = 0;
    
    int maxPath(TreeNode *root) {
        if(root == NULL)
            return 0;
        int l = maxPath(root->left);
        int r = maxPath(root->right);
        int lval = 0,rval = 0;
        if(root->left != NULL)
            if(root->left->val == root->val) {
                lval = 1 + l ;
            }
        if(root->right != NULL) 
            if(root->right->val == root->val) {
                rval = 1 + r;
            }
        ans = max(ans,lval+rval);
        return max(lval,rval);
    }
    int longestUnivaluePath(TreeNode* root) {
        maxPath(root);
        return ans;
    }
};