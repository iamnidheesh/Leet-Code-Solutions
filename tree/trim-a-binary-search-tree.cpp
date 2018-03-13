/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// TODO :- free addresses
class Solution {
public:
	int minVal(TreeNode* root) {
		TreeNode * prev = NULL;
		while(root->left != NULL) {
			prev = root;
			root = root->left;
		}
		int val = root->val;
		prev->left = NULL;
		return val;
	}
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root == NULL)
        	return root;

    	root->left = trimBST(root->left,L,R);
    	root->right = trimBST(root->right,L,R);
    	if(root->val < L || root->val > R) {
    		if(root->left == NULL) {    			
    			return root->right;
    		}
    		if(root->right == NULL)  {
    			return root->left;
    		}
    		root->val = minVal(root->right);

    	}
    	return root;
    }
};