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
	vector <vector <int> > v;
	vector <int> temp;
	void makeVector(int sum) {
		int s = 0;
		for(auto i = 0;i < temp.size();i++ ) {
			s += temp[i];
		}
		if(s == sum)
			v.push_back(temp);
	}
	void makePath(TreeNode * root,int sum) {
		if(root->left == NULL && root->right == NULL) {
			temp.push_back(root->val);
			makeVector(sum);
			temp.pop_back();
		}
		temp.push_back(root->val);
		if(root->left != NULL) {
			makePath(root->left,sum);
		}
		if(root->right != NULL) {
			makePath(root->right,sum);
		}
		temp.pop_back();
		
	}
    vector<vector <int> > pathSum(TreeNode* root,int sum) {
        
        if(root == NULL)
        	return v;
        makePath(root,sum);
        return v;
    }
};