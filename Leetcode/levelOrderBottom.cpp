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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> level;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                result.insert(result.begin(), level);
                level.clear();
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                level.push_back(temp->val);
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