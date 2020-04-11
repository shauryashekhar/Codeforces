class Solution {
public:
    int dfs(TreeNode* root,int &ans) {
        if(!root)
            return 0;
        
        int l = dfs(root->left,ans);
        int r = dfs(root->right,ans);
        ans = max(ans,l + r);
        
        return max(l,r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        
        int ans = INT_MIN;
        dfs(root,ans);
        return ans;
    }
};