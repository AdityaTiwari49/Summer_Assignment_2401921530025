/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void indorder(TreeNode* root,vector <int> &ans){
        if(root==NULL) return;
        indorder(root->left,ans);
        ans.push_back(root->val);
        indorder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        indorder(root,ans);
        return ans;
        
    }
};