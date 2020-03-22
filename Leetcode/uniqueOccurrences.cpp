class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.size() == 0) {
            return true;
        }
        map<int, int> m;
        for(int i = 0; i < arr.size(); i++) {
            if(m.count(arr[i])) {
                m[arr[i]] = m[arr[i]] + 1;
            } else {
                m[arr[i]] = 1;
            }
        }
        set<int> s;
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