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
	set <int> s;
	void find(TreeNode* root) {
		if(root == NULL)
			return;
		s.insert(root->val);
		find(root->left);
		find(root->right);
	}
    int findSecondMinimumValue(TreeNode* root) {
    	find(root);
    	if(s.size() == 1)
    		return -1;
    	else {
    		auto x = s.begin();
    		x++;
    		return *x;
    	}
    }
};