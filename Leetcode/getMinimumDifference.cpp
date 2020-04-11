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
    
    vector<int> traversal(TreeNode* root) {
        if(root) {
            traversal(root->left);
            order.push_back(root->val);
            traversal(root->right);
        }
        return order;
    }
    
    int getMinimumDifference(TreeNode* root) {
        if(!root) {
            return 0;
        }
        int result = INT_MAX;
        order = traversal(root);
        for(int i = 0; i < order.size(); i++) {
            for(int j = i + 1; j < order.size(); j++) {
                int tempDiff = abs(order[i] - order[j]);
                if(tempDiff < result) {
                    result = tempDiff;
                }
            }
        }
        return result;
    }
};