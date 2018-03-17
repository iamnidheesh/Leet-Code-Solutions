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
    vector <TreeNode *> v;
	void preorder(TreeNode* root) {
		if(root == NULL)
			return;
		v.push_back(root);
		preorder(root->left);
		preorder(root->right);
	}
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
        
        preorder(root);
    	for(int i = 1;i < v.size();i++) {
    		v[i-1]->left = NULL;
    		v[i-1]->right = v[i];
    	}
    }
};