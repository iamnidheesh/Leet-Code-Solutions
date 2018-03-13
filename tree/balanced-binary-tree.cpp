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
	bool flag = true;
	int isB(TreeNode* root) {
		if(root->left == NULL && root->right == NULL) {
			return 0; // depth of subtree is to be calculated
		}
		int l = 0,r = 0;
		if(root->left != NULL)
			l = 1 + isB(root->left);
		if(root->right != NULL)
			r = 1 + isB(root->right);
		if(abs(l-r) > 1)
			flag = false;
		return max(l,r);
	}
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        	return true;
        isB(root);
        return flag;
    }
};