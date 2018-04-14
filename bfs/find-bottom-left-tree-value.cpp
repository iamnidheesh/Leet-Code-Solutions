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
    int findBottomLeftValue(TreeNode* root) {
        queue <TreeNode*> q;
      	unordered_map <TreeNode*,pair<int,int> > vis;
        q.push(root);
        int t = 0,lastLevel = 0;
        vis[root] = {0,t};
        while(!q.empty()) {
        	TreeNode* curr = q.front();
        	q.pop();
        	if(curr->left != NULL) {
        		q.push(curr->left);
        		lastLevel = vis[curr].first+1;
        		vis[curr->left] = {vis[curr].first+1,++t};
        	}
        	if(curr->right != NULL) {
        		q.push(curr->right);
        		lastLevel = vis[curr].first+1;
        		vis[curr->right] = {vis[curr].first+1,++t};
        	}
          
        }
        int ans = 0,newT = t+1;
        for(auto i = vis.begin();i != vis.end();i++) {
        	if(vis[i->first].first == lastLevel && newT > vis[i->first].second) {
        		newT = vis[i->first].second;
        		ans = i->first->val;
        	}
        }
        return ans;
    }
};