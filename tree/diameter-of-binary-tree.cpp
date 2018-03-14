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
	int height(TreeNode* root) {
		if(root == NULL)
			return 0;
		int l = 1 + height(root->left);
		int r = 1 + height(root->right);
		ans = max(ans,l+r-2);
		return max(l,r);
	}
    int diameterOfBinaryTree(TreeNode* root) {
  		height(root);
  		return ans;    
    }
};