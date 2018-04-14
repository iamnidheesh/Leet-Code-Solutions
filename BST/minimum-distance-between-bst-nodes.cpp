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
	void inorder(TreeNode* root) {
		if(root == NULL)
			return;
		inorder(root->left);
		v.push_back(root->val);
		inorder(root->right);
	}
    int minDiffInBST(TreeNode* root) {
    	
    	int ans = INT_MAX;
        inorder(root);
    	for(int i = 0;i < v.size()-1;i++) {
    		ans = min(ans,abs(v[i]-v[i+1]));
    	}
        return ans;
    }
};