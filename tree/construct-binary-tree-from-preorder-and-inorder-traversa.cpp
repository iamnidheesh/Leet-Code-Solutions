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
	vector <int> in,pre;
	TreeNode* makeTree(int li,int ui,int lp,int up) {
		if(lp > up || li > ui)
			return NULL;
		TreeNode* root = new TreeNode(pre[lp]);
		int index;
		for(int i = li;i <= ui;i++) {
			if(in[i] == pre[lp]) {
				index = i;
				break;
			}
		}
		int lsize = index-li;
		root->left = makeTree(li,index-1,lp+1,lp+lsize);
		root->right = makeTree(index+1,ui,lp+lsize+1,up);
		return root;

	}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    	in = inorder;
    	pre = preorder;
    	return makeTree(0,in.size()-1,0,pre.size()-1);
    }   

};