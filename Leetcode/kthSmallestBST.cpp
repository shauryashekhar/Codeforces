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
    
    vector<int> traversal;
    
    void inorder(TreeNode* root) {
        if(root) {
            inorder(root->left);
            traversal.push_back(root->val);
            inorder(root->right);
        }
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        if(!root) {
            return -1;
        }
        inorder(root);
        return traversal[k-1];
    }
};