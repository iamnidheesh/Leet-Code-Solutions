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
	TreeNode* createTree(TreeNode* t3,TreeNode* t1,TreeNode* t2) {
		if(t2 == NULL && t1 == NULL) {
			return NULL;
		}
		if(t2 != NULL && t1 != NULL) {
			t3 = new TreeNode(t1->val+t2->val);
			t3->right = createTree(t3->right,t1->right,t2->right);
			t3->left = createTree(t3->left,t1->left,t2->left);
		}
		else if(t2 != NULL) {
			t3 = new TreeNode(t2->val);
			t3->right = createTree(t3->right,t1,t2->right);
			t3->left = createTree(t3->left,t1,t2->left);

		}
		else {
			t3 = new TreeNode(t1->val);
			t3->right = createTree(t3->right,t1->right,t2);
			t3->left = createTree(t3->left,t1->left,t2);
		}
		return t3;
	}
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    	TreeNode *root = NULL; 
    	root = createTree(root,t1,t2);
        return root;
    }
};