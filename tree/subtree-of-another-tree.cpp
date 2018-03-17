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
	bool flag = false;
	bool subtree;
	void cmpTree(TreeNode* s,TreeNode* t) {
		if(s == NULL && t == NULL)
			return;
		if(s == NULL && t != NULL) {
			subtree = false;
			return;
		}
		if(s != NULL && t == NULL) {
			subtree = false;
			return;
		}
		if(s->val != t->val) {
			subtree = false;
			return;
		} 
		cmpTree(s->left,t->left);
		cmpTree(s->right,t->right);
	}
	void traverse(TreeNode* s,TreeNode* t) {
		if(s == NULL)
			return;
		subtree = true;
		cmpTree(s,t);
		if(subtree) {
			flag = true;
		}
		if(flag) {
			return;
		}
		traverse(s->left,t);
		traverse(s->right,t);
	}
    bool isSubtree(TreeNode* s, TreeNode* t) {
 
  		traverse(s,t);
        return flag;
    }
};