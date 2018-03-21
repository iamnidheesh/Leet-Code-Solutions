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
	int findMinDepth(TreeNode * root) {
		if(root->right == NULL && root->left == NULL)
			return 1;
		int l = 0,r = 0;
		if(root->left != NULL)
			l = 1 + findMinDepth(root->left);
		if(root->right != NULL)
			r = 1 + findMinDepth(root->right);
		if(r != 0 && l != 0)
			return min(l,r);
		else
			return max(l,r);
	}
    int minDepth(TreeNode* root) {
        if(root == NULL)
        	return 0;
       	return findMinDepth(root);
    }
};