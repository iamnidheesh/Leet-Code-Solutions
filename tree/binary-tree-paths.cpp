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
	vector <string> v;
	vector <int> temp;
	void makeVector() {
		string s = "";
		for(auto i = 0;i < temp.size()-1;i++ ) {
			s += to_string(temp[i]) + "->";
		}
		s += to_string(temp[temp.size()-1]);
		v.push_back(s);
	}
	void makePath(TreeNode * root) {
		if(root->left == NULL && root->right == NULL) {
			temp.push_back(root->val);
			makeVector();
			temp.pop_back();
		}
		temp.push_back(root->val);
		if(root->left != NULL) {
			makePath(root->left);
		}
		if(root->right != NULL) {
			makePath(root->right);
		}
		temp.pop_back();
		
	}
    vector<string> binaryTreePaths(TreeNode* root) {
        
        if(root == NULL)
        	return v;
        makePath(TreeNode* root);
        return v;
    }
};