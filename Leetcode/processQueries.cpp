class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> result;
        vector<int> v;
        if(queries.size() == 0 || m == 0) {
            return result;
        }
        for(int i = 1; i <= m; i++) {
            v.push_back(i);
        }
        for(int q : queries) {
            int i;
            for(i = 0; i < m; i++) {
                if(v[i] == q) {
                    break;  
                }
            }
            result.push_back(i);
            v.erase(v.begin() + i);
            v.insert(v.begin(), q);
        }
        return result;
    }
};