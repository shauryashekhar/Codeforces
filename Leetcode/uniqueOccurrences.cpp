class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.size() == 0) {
            return true;
        }
        map<int, int> m;
        set<int> s;
        for(int x : arr) {
            if(m.count(x)) {
                m[x] = m[x] + 1;
            } else {
                m[x] = 1;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            s.insert(itr->second);
        }
        if(m.size() == s.size()) {
            return true;
        } else {
            return false;
        }
    }
};