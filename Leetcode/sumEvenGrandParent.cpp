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
    int sumEvenGrandparent(TreeNode* root) {
        if(!root) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int result = 0;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->val % 2 == 0) {
                if(temp->left) {
                    if(temp->left->left) {
                        result = result + temp->left->left->val;
                    }
                    if(temp->left->right) {
                        result = result + temp->left->right->val;
                    }
                }
                if(temp->right) {
                    if(temp->right->left) {
                        result = result + temp->right->left->val;
                    }
                    if(temp->right->right) {
                        result = result + temp->right->right->val;
                    }
                }
            }
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
        return result;
    }
};