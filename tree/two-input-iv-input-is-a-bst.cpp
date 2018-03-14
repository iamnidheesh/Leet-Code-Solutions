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
    vector <int> v;
    void traverse(TreeNode* root) {
        if(root == NULL)
            return;
        traverse(root->left);
        v.push_back(root->val);
        traverse(root->right);
    }
    bool findTarget(TreeNode* root,int k) {
        if(root == NULL)
            return true;
        traverse(root);
        bool flag = false;
        for(int i = 0;i < v.size();i++) {
            int temp = v[i];
            v[i] = INT_MIN;
            if(binary_search(v.begin(),v.end(),k-temp)) {
               flag = true;
               break; 
            }
            v[i] = temp;

        }
        
        return flag;
    }
};