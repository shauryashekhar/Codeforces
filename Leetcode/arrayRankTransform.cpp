class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> result;
        if(arr.size() == 0) {
            return result;
        }
        set<int> s;
        vector<int> sorted;
        for(int x : arr) {
            if(s.count(x) == 0) {
                s.insert(x);
                sorted.push_back(x);
            }
        }
        sort(sorted.begin(), sorted.end());
        map<int, int> m;
        for(int i = 0; i < sorted.size(); i++) {
            m[sorted[i]] = i;
        }
        for(int x : arr) {
            result.push_back(m[x] + 1);
        }
        return result;
    }
};