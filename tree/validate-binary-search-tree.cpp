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
	void validate(TreeNode* root) {
		if(root == NULL)
			return;
		validate(root->left);
		v.push_back(root->val);
		validate(root->right);
	}
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
        	return true;
        validate(root);
        bool flag = true;
        for(int i = 1;i < v.size();i++) {
        	if(v[i] <= v[i-1]) {
        		flag = false;
        		break;
        	}

        }
        return flag;
    }
};