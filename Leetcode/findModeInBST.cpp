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
    vector<int> order;
public:
    
    void inOrder(TreeNode* root) {
        if(root) {
            inOrder(root->left);
            order.push_back(root->val);
            inOrder(root->right);
        }
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> result;
        if(!root) {
            return result;
        }
        inOrder(root);
        map<int, int> m;
        for(int i = 0; i < order.size(); i++) {
            if(m.count(order[i])) {
                m[order[i]] = m[order[i]] + 1;
            } else {
                m[order[i]] = 1;
            }
        }
        int highestCount = 0;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second > highestCount) {
                highestCount = itr->second;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if (itr->second == highestCount) {
                result.push_back(itr->first);
            }
        }
        return result;
    }
};