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
	vector <pair<int,int> > v;
	void inorder(TreeNode* root,int level) {
		if(root == NULL)
			return;
		inorder(root->left,level+1);
		v.push_back({root->val,level});
		inorder(root->right,level+1);
	}
    bool isSymmetric(TreeNode* root) {
        inorder(root,0);
        bool flag = true;
        int i = 0,j = v.size()-1;
        while(j > i ) {
        	if(v[i] != v[j]) {
        		flag = false;
        		break;
        	}
        	i++;
        	j--;
        }
        return flag;
    }
};