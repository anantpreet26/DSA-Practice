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
    void dfs(TreeNode* root,vector<int>&v){
        if(root == NULL)return;
        if(root->left == NULL &&root->right == NULL)
        {
            v.push_back(root->val);
            return;
        }
        dfs(root->left,v);
        dfs(root->right,v);
        return;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        dfs(root1,v);
        vector<int>u;
        dfs(root2,u);
        int i;
        for( i=0;i<v.size();i++)
            if(v[i] != u[i])return false;
        if(v.size()>i || u.size()>i)return false;
        return true;
    }
};