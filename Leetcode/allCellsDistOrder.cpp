class myComparator {
    public:
    bool operator() (pair<vector<int>, int> p1, pair<vector<int>, int> p2) {
        if(p2.second < p1.second) {
            return true;
        } else {
            return false;
        }
    }
};

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> result;
        if(R == 0 || C == 0) {
            return result;
        }
        priority_queue<pair<vector<int>, int>, vector<pair<vector<int>, int>>, myComparator> pq;
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < C; j++) {
                int distance = 0;
                distance = abs(i-r0) + abs(j-c0);
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j);
                pq.push(make_pair(temp, distance));
            }
        }
        while(!pq.empty()) {
            pair<vector<int>, int> tempPair = pq.top();
            pq.pop();
            vector<int> tv = tempPair.first;
            result.push_back(tv);
        }
        return result;
    }
};