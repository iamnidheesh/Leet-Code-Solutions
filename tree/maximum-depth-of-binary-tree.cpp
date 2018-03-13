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
	int maxD(TreeNode* root) {
		if(root->left == NULL && root->right == NULL) {
			return 1;
		}
		int l = 0,r = 0;
		if(root->left != NULL)
			l = 1 + maxD(root->left);
		if(root->right != NULL)
			r = 1 + maxD(root->right);
		return max(l,r);
	}
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        	return 0;
        return maxD(root);
    }
};