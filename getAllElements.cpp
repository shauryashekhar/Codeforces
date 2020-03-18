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
    multiset<int> ms;
public:
    
    void inOrder(TreeNode* root) {
        if(root) {
            inOrder(root->left);
            ms.insert(root->val);
            inOrder(root->right);
        }
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if(root1) {
            inOrder(root1);
        }
        if(root2) {
            inOrder(root2);
        }
        vector<int> result;
        for(auto itr = ms.begin(); itr != ms.end(); itr++) {
            result.push_back(*itr);
        }
        return result;
    }
};