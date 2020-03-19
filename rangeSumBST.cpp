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
    vector<int> order;
public:
    
    void inorder(TreeNode* root) {
        if(root) {
            inorder(root->left);
            order.push_back(root->val);
            inorder(root->right);
        }
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        int result;
        if(!root) {
            return 0;
        }
        inorder(root);
        int sum  = 0;
        for(int x : order) {
            if(x >= L && x <= R) {
                sum = sum + x;
            }
        }
        return sum;
    }
};