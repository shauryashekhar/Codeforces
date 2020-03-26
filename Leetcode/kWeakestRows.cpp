class myComparator {
    public:
    bool operator() (pair<int, int> p1, pair<int, int> p2) {
        if(p2.second < p1.second) {
            return true;
        } else if(p2.second > p1.second) {
            return false;
        } else if(p2.second == p1.second) {
            if(p2.first < p1.first) {
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
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> result;
        if(mat.size() == 0) {
            return result;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, myComparator> pq;
        int r = mat.size();
        int c = mat[0].size();
        for(int i = 0; i < r; i++) {
            int count = 0;
            for(int j = 0; j < c; j++) {
                if(mat[i][j] == 1) {
                    count++;
                } else {
                    break;
                }
            }
            pq.push(make_pair(i, count));
        }
        for(int l = 0; l < k; l++) {
            pair<int, int> tp = pq.top();
            pq.pop();
            result.push_back(tp.first);
        }
        return result;
    }
};