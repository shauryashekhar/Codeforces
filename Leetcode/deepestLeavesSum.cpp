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
    int deepestLeavesSum(TreeNode* root) {
        if(!root) {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        map<int, vector<int>> m;
        int level = 0;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                level++;
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                if(m.count(level)) {
                    vector<int> tempVector = m[level];
                    tempVector.push_back(temp->val);
                    m[level] = tempVector;
                } else {
                    vector<int> tempVector;
                    tempVector.push_back(temp->val);
                    m[level] = tempVector;
                }
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
        }
        vector<int> finalLowest;
        int lowestLevel = INT_MIN;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->first > lowestLevel) {
                lowestLevel = itr->first;
            }
        }
        finalLowest = m[lowestLevel];
        int sum = 0;
        for(int x : finalLowest) {
            sum = sum + x;
        }
        return sum;
    }
};