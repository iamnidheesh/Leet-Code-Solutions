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
	map <int,int> m;
	void countFreq(TreeNode* root) {
		if(root == NULL) {
			return;
		}
		m[root->val]++;
		countFreq(root->left);
		countFreq(root->right);
	}
    vector<int> findMode(TreeNode* root) {
        vector <int> v;
        if(root == NULL)
        	return v;
        countFreq(root);
        int maxVal = 0;
        for(auto i = m.begin();i != m.end();i++) {
        	if(i->second > maxVal)
        		maxVal = i->second;
        }
        for(auto i = m.begin(); i != m.end();i++) {
        	if(i->second == maxVal)
        		v.push_back(i->first);
        }
        return v;
    }
};