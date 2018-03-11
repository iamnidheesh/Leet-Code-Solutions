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
	bool ans = true;
	void same(TreeNode *p, TreeNode *q) {
		if(p == NULL && q == NULL)
			return;
		if((p == NULL && q != NULL) || (p != NULL && q == NULL)) {
			ans = false;
			return;
		}
		if(p->val != q->val) {
			ans = false;
			return;
		}
		same(p->left,q->left);
		same(p->right,q->right);
	}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        same(p,q);
        return ans;
    }
};