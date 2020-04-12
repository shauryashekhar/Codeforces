class myComparator {
    public:
    bool operator() (pair<int, int> p1, pair<int, int> p2) {
        if(p2.second > p1.second) {
            return true;
        } else if(p2.second < p1.second) {
            return false;
        } else if(p2.second == p1.second) {
            if(p2.first > p1.first) {
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
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> result;
        if(restaurants.size() == 0) {
            return result;
        }
        vector<vector<int>> tempResult;
        for(int i = 0; i < restaurants.size(); i++) {
            vector<int> tr = restaurants[i];
            if(tr[3] <= maxPrice && tr[4] <= maxDistance) {
                if(veganFriendly) {
                    if(tr[2]) {
                        tempResult.push_back(tr);
                    }
                } else {
                    tempResult.push_back(tr);   
                }
            }
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, myComparator> pq;
        for(vector<int> r : tempResult) {
            pair<int, int> p = make_pair(r[0], r[1]);
            pq.push(p);
        }
        while(!pq.empty()) {
            pair<int, int> tp = pq.top();
            pq.pop();
            result.push_back(tp.first);
        }
        return result;
    }
};