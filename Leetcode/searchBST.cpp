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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) {
            return NULL;
        }
        if(root->val == val) {
            return root;
        } else if(root->val > val) {
            return searchBST(root->left, val);
        } else {
            return searchBST(root->right, val);
        }
        return NULL;
    }
};

// SOLUTION 2

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) {
            return NULL;
        }
        TreeNode* current = root;
        while(current) {
            if(current->val < val) {
                current = current->right;
            } else if(current->val > val) {
                current = current->left;
            } else if(current->val == val) {
                return current;
            }
        }
        return NULL;
    }
};