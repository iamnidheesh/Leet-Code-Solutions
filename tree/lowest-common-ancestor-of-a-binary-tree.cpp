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
	void findPath(TreeNode* root,TreeNode* p,vector <TreeNode*> &v) {
		if(root == NULL) {
			return;
		}
		if(flag) {
			return;
		}
		if(root == p) {
			v.push_back(root);
			flag = true;
			return;
		}
        v.push_back(root);
		findPath(root->left,p,v);
		findPath(root->right,p,v);
        if(!flag)
		    v.pop_back();
	}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <TreeNode* > ppath,qpath;
        findPath(root,q,qpath);
        flag = false;
        findPath(root,p,ppath);
        int i = 0;
        while(i < ppath.size() && i < qpath.size()) {
        	if(ppath[i] == qpath[i]) {
        		i++;
        	}
        	else
        		break;
        }
        
        return ppath[i-1];
    }
};