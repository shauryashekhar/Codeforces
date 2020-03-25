class myComparator {
    public:
    bool operator() (pair<vector<int>, double> p1, pair<vector<int>, double> p2) {
        double d1 = p1.second;
        double d2 = p2.second;
        if(d2 < d1) {
            return true;
        } else {
            return false;
        }
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> result;
        if(points.size() == 0 || K == 0) {
            return result;
        }
        priority_queue<pair<vector<int>, double>, vector<pair<vector<int>, double>>, myComparator> pq;
        for(vector<int> point : points) {
            int x = point[0];
            int y = point[1];
            double distance = sqrt(pow(x,2) + pow(y,2));
            pq.push(make_pair(point, distance));
        }
        for(int i = 0; i < K; i++) {
            pair<vector<int>, double> tp = pq.top();
            pq.pop();
            vector<int> point = tp.first;
            result.push_back(point);
        }
        return result;
    }
};