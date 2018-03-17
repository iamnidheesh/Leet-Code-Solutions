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
    int countNodes(TreeNode* root) {
        if(root == NULL)
        	return 0;
        int l = 0,r = 0;
        TreeNode* L = root,*R = root;
        while(L) {
        	L = L->left;
        	l++;
        }
        while(R) {
        	R = R->right;
        	r++;
        }
        if(l == r)
        	return pow(2,r) -1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};