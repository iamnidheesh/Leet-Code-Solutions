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
    map <int,pair<int,long int> > m;
	void traverse(TreeNode* root, int level) {
		if(root == NULL)
			return;
		m[level].first += 1;
		m[level].second += root->val;
		traverse(root->left,level+1);
		traverse(root->right,level+1);
	}
    vector<double> averageOfLevels(TreeNode* root) {
       
        traverse(root,1);
        vector <double> v;
        for(auto i = m.begin();i != m.end();i++) {
        	v.push_back((i->second).second/((i->second).first*1.0));
        }
        return v;
    }
};