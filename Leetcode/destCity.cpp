class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> m;
        for(vector<string> path : paths) {
            string source = path[0];
            string dest = path[1];
            if(m.count(source)) {
                m[source] = m[source] - 1;
            } else {
                m[source] = -1;
            }
            if(m.count(dest)) {
                m[dest] = m[dest] + 1;
            } else {
                m[dest] = 1;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second > 0) {
                return itr->first;
            }
        }
        return "";
    }
};