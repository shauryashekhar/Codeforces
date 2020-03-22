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
    int maxLevelSum(TreeNode* root) {
        int result = 0;
        if(!root) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int levelSum = 0;
        int currentMax = INT_MIN;
        int maxLevel = INT_MAX;
        int currentLevel = 1;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                if(levelSum > currentMax) {
                    currentMax = levelSum;
                    maxLevel = currentLevel;
                }
                currentLevel++;
                levelSum = 0;
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                levelSum = levelSum + temp->val;
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
        }
        return maxLevel;
    }
};