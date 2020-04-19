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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) {
            return NULL;
        }
        if(target == NULL) {
            return NULL;
        }
        int l = 0;
        int vertical = 0;
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(original, 0));
        q.push(make_pair(new TreeNode(INT_MAX), 0));
        while(!q.empty()) {
            pair<TreeNode*, int> tp = q.front();
            q.pop();
            TreeNode* temp = tp.first;
            int d = tp.second;
            if(temp->val == INT_MAX) {
                l++;
                if(!q.empty()) {
                    q.push(make_pair(new TreeNode(INT_MAX), 0));
                }
            } else {
                if(temp == target) {
                    vertical = d;
                    break;
                }
                if(temp->left) {
                    q.push(make_pair(temp->left, d-1));
                }
                if(temp->right) {
                    q.push(make_pair(temp->right, d+1));
                }
            }
        }
        int ls = 0;
        queue<pair<TreeNode*, int>> qs;
        qs.push(make_pair(cloned, 0));
        qs.push(make_pair(new TreeNode(INT_MAX), 0));
        while(!qs.empty()) {
            pair<TreeNode*, int> tp = qs.front();
            qs.pop();
            TreeNode* temps = tp.first;
            // cout<<temps->val<<endl;
            int ds = tp.second;
            if(ls == l && ds == vertical && temps->val == target->val) {
                return temps;
            }
            if(temps->val == INT_MAX) {
                ls++;
                if(!qs.empty()) {
                    qs.push(make_pair(new TreeNode(INT_MAX), 0));
                }
            } else {
                if(temps->left) {
                    qs.push(make_pair(temps->left, ds-1));
                }
                if(temps->right) {
                    qs.push(make_pair(temps->right, ds+1));
                }
            }
        }
        return NULL;
    }
};