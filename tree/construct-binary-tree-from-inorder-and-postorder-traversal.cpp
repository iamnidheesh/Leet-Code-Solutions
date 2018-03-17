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
	vector <int> in,post;
	TreeNode* makeTree(int li,int ui,int lp,int up) {
		if(lp > up || li > ui)
			return NULL;
		TreeNode* root = new TreeNode(post[up]);
		int index;
		for(int i = li;i <= ui;i++) {
			if(in[i] == post[up]) {
				index = i;
				break;
			}
		}
		int lsize = index-li;
		root->left = makeTree(li,index-1,lp,lp+lsize-1);
		root->right = makeTree(index+1,ui,lp+lsize,up-1);
		return root;

	}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    	in = inorder;
    	post = postorder;
    	return makeTree(0,in.size()-1,0,post.size()-1);
    }   

};