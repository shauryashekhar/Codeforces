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
    int sumOfLeftLeaves(TreeNode* root) {
        int result = 0;
        if(!root) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left) {
                if(temp->left->left == NULL && temp->left->right == NULL) {
                    result = result + temp->left->val;
                }
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
        return result;
    }
};