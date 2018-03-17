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
	vector <int> v;
	map <TreeNode*,int> m;
	void traverse(TreeNode* root) {
		if(root == NULL)
			return;
		traverse(root->left);
		v.push_back(root->val);
		m[root] = v.size()-1;
		traverse(root->right);
	}
	TreeNode * change(TreeNode* root) {
		if(root == NULL)
			return NULL;
		root->val = v[m[root]];
		root->left = change(root->left);
		root->right = change(root->right);
		return root;
	}
    TreeNode* convertBST(TreeNode* root) {
    	traverse(root);
    	for(int i = v.size()-2;i >= 0;i--) {
    		v[i] += v[i+1];
    	}
    	return change(root);	    
    }
};