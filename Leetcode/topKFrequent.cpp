class myComparator {
    public:
    bool operator() (pair<int, int> p1, pair<int, int> p2) {
        if(p2.second > p1.second) {
            return true;
        } else {
            return false;
        }
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        if(nums.size() == 0 || k == 0) {
            return result;
        }
        map<int, int> m;
        for(int x : nums) {
            if(m.count(x)) {
                m[x] = m[x] + 1;
            } else {
                m[x] = 1;
            }
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, myComparator> pq;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            pq.push(make_pair(itr->first, itr->second));
        }
        for(int j = 0; j < k; j++) {
            pair<int, int> tp = pq.top();
            pq.pop();
            result.push_back(tp.first);
        }
        return result;
    }
};