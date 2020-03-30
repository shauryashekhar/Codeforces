/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) {
            return 0;
        }
        int level = 0;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();
            if(temp == NULL) {
                level++;
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                for(int i = 0; i < temp->children.size(); i++) {
                    q.push(temp->children[i]);
                }
            }
        }
        return level;
    }
};