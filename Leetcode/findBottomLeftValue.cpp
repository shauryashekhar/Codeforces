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
    int findBottomLeftValue(TreeNode* root) {
        int result = 0;
        if(!root) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        result = root->val;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                if(!q.empty()) {
                    q.push(NULL);
                    result = q.front()->val;
                }
            } else {
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return result;
    }
};