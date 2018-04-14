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
    vector <int> largestValues(TreeNode* root) {
        if(root == NULL)
            return vector <int> ();
        queue <TreeNode*> q;
      	unordered_map <TreeNode*,int > vis;
      	map <int,vector <int> > level;
      	vector <int> ans;
        q.push(root);
        int t = 0;
        vis[root] = 0;
        level[0].push_back(root->val);
        while(!q.empty()) {
        	TreeNode* curr = q.front();
        	q.pop();
        	if(curr->left != NULL) {
        		q.push(curr->left);
        		vis[curr->left] = vis[curr]+1;
        		level[vis[curr]+1].push_back(curr->left->val);
        	}
        	if(curr->right != NULL) {
        		q.push(curr->right);
        		vis[curr->right] = vis[curr]+1;
        		level[vis[curr]+1].push_back(curr->right->val);
        	}
        }
       	for(auto i : level) {
       		int value = INT_MIN;
       		for(auto j : i.second) {
       			if(value < j)
       				value = j;
       		}
       		ans.push_back(value);
       	}
        return ans;
    }
};