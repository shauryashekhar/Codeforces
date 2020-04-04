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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) {
            return result;
        }
        map<int, vector<int>> m;
        int level = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL) {
                m[level] = v;
                v.clear();
                level++;
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                v.push_back(temp->val);
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
        }
        vector<int> rootLevel = m[0];
        result.push_back(rootLevel);
        for(int i = 1; i < level; i++) {
            vector<int> l = m[i];
            vector<int> t;
            if(i % 2 == 0) {
                for(auto itr = l.begin(); itr != l.end(); itr++) {
                    t.push_back(*itr);
                }
            } else {
                for(auto itr = l.rbegin(); itr != l.rend(); itr++) {
                    t.push_back(*itr);
                }
            }
            result.push_back(t);
        }
        return result;
    }
};