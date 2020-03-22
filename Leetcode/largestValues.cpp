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
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        if(!root) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int largestValue = INT_MIN;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                result.push_back(largestValue);
                largestValue = INT_MIN;
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                if(temp->val > largestValue) {
                    largestValue = temp->val;
                }
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