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
    int reqSum;
	void hasSum(TreeNode *root, int sum) {
		if(root->left == NULL && root->right == NULL) {
			if(sum + root->val == reqSum)
				flag = true;
			return;
		}
		if(root->left != NULL)
			hasSum(root->left,sum+root->val);
		if(root->right != NULL)
			hasSum(root->right,sum+root->val);
	}
    bool hasPathSum(TreeNode* root, int sum) {
    	reqSum = sum;
        if(root != NULL)
    		hasSum(root,0);
    	return flag;

    }
};