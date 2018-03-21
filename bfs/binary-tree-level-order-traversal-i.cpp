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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue < TreeNode * > q;
        map < TreeNode * , int > m;
        map < int, vector <int> > level;
        vector <vector <int> > v;
        if(root == NULL)
        	return v;
        q.push(root);
        m[root] = 1;
      
        while(!q.empty()) {
        	TreeNode* curr = q.front();
        	q.pop();
        	level[m[curr]].push_back(curr->val);
        	if(curr->left != NULL) {
        		q.push(curr->left);
        		m[curr->left] = 1 + m[curr];
        	}
        	if(curr->right != NULL) {
        		q.push(curr->right);
        		m[curr->right] = 1 + m[curr];
        	}
        }

        for(auto i = level.rbegin(); i != level.rend();i++) {
        	v.push_back(i->second);
        }
        return v;
    }
};