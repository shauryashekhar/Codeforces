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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) {
            return result;
        }
        queue<pair<TreeNode*, int>> q;
        map<int, vector<int>> m;
        q.push({root, 0});
        while(!q.empty()) {
            pair<TreeNode*, int> tempPair = q.front();
            q.pop();
            TreeNode* temp = tempPair.first;
            int d = tempPair.second;
            if(m.count(d)) {
                vector<int> tempList = m[d];
                tempList.push_back(temp->val);
                m[d] = tempList;
            } else {
                vector<int> tempList;
                tempList.push_back(temp->val);
                m[d] = tempList;
            }
            if(temp->left) {
                q.push({temp->left, d - 1});
            }
            if(temp->right) {
                q.push({temp->right, d + 1});
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            vector<int> tempList = itr->second;
            result.push_back(tempList);
        }
        return result;
    }
};