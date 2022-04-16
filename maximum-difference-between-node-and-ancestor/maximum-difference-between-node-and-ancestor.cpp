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
    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        if(!root) return ans ;
        // Traverse keeping track of largest and smallest element you find in the path
        dfs(root,root->val,root->val,ans);
        return ans ;
    }
    
    // max difference between a node and a decendant is between it and either the min or max of its decendants 
    void dfs(TreeNode *root, int mn, int mx, int &ans){
        if(!root) return ;
        ans = max({ans, abs(root->val - mn), abs(root->val - mx)});
        // update min and max 
        mx = max(mx,root->val);
        mn = min(mn,root->val);
        dfs(root->left,mn,mx,ans);
        dfs(root->right,mn,mx,ans);
    }
};