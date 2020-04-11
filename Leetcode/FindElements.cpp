/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class FindElements {
    TreeNode* tree;
    set<int> s;
public:
    FindElements(TreeNode* root) {
        tree = root;
        queue<TreeNode*> q;
        tree->val = 0;
        q.push(tree);
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left) {
                temp->left->val = (temp->val * 2) + 1;
                s.insert(temp->left->val);
                q.push(temp->left);
            }
            if(temp->right) {
                temp->right->val = (temp->val * 2) + 2;
                s.insert(temp->right->val);
                q.push(temp->right);
            }
        }
        
    }
    
    bool find(int target) {
        if(s.count(target)) {
            return true;
        } else {
            return false;
        }
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */