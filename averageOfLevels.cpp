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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if(!root) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        double count = 0;
        double sum = 0;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                double average = sum / count;
                count = 0;
                sum = 0;
                result.push_back(average);
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                count++;
                sum = sum + temp->val;
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