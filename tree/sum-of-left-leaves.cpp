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
	bool leftLeave(TreeNode* root) {
		if(root->left == NULL && root->right == NULL) {
			return true;
		}
		if(root->left != NULL) {
			bool flag = leftLeave(root->left);
			if(flag)
				ans += root->left->val;
		}
		if(root->right != NULL) {
			leftLeave(root->right);
		}
		return false;
	}
    int sumOfLeftLeaves(TreeNode* root) {
  		if(root == NULL)
  			return 0;
  		leftLeave(root);
  		return ans;			     
    }
};