/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class myComparator {
    public:
    bool operator() (pair<int, int> p1, pair<int, int> p2) {
        if(p2.first < p1.first) {
            return true;
        } else if (p2.first > p1.first) {
            return false;
        } else if (p2.first == p1.first) {
            if(p2.second < p1.second) {
                return true;
            } else {
                return false;
            }
        }
        return false;
    }
};

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) {
            return result;
        }
        map<int, vector<pair<int, int>>> m;
        queue<pair<TreeNode*, int>> q;
        int level = 0;
        q.push(make_pair(root, 0));
        q.push(make_pair(new TreeNode(INT_MIN), -1));
        while(!q.empty()) {
            pair<TreeNode*, int> tp = q.front();
            TreeNode* temp = tp.first;
            int d = tp.second;
            q.pop();
            if(temp->val == INT_MIN) {
                level++;
                if(!q.empty()) {
                    q.push(make_pair(new TreeNode(INT_MIN), 0));
                }
            } else {
                if(m.count(d)) {
                    vector<pair<int, int>> tv = m[d];
                    // cout<<temp->val<<" pushed."<<endl;
                    tv.push_back(make_pair(level, temp->val));
                    m[d] = tv;
                } else {
                    vector<pair<int, int>> tv;
                    // cout<<temp->val<<" pushed."<<endl;
                    tv.push_back(make_pair(level, temp->val));
                    m[d] = tv;
                }
                if(temp->left) {
                    q.push(make_pair(temp->left, d-1));
                }
                if(temp->right) {
                    q.push(make_pair(temp->right, d+1));
                }
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            vector<int> vertical;
            vector<pair<int, int>> tv = itr->second;
            // cout<<"For "<<itr->first<<endl;
            priority_queue<pair<int, int>, vector<pair<int, int>>, myComparator> pq;
            for(pair<int, int> p : tv) {
                pq.push(p);
            }
            while(!pq.empty()) {
                pair<int, int> tp = pq.top();
                pq.pop();
                // cout<<tp.second<<" ";
                vertical.push_back(tp.second);
            }
            // cout<<endl;
            result.push_back(vertical);
        }
        return result;
    }
};