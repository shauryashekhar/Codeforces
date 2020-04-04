class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        vector<vector<string>> result;
        if(strs.size() == 0) {
            return result;
        }
        for(string s: strs) {
            map<char, int> cm;
            for(char c : s) {
                if(cm.count(c)) {
                    cm[c] = cm[c] + 1;
                } else {
                    cm[c] = 1;
                }
            }
            string keys = "";
            for(auto itr = cm.begin(); itr != cm.end(); itr++) {
                char letter = itr->first;
                int number = itr->second;
                keys = keys + letter + to_string(number);
            }
            if(m.count(keys)) {
                vector<string> tv = m[keys];
                tv.push_back(s);
                m[keys] = tv;
            } else {
                vector<string> tv;
                tv.push_back(s);
                m[keys] = tv;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            vector<string> tsv = itr->second;
            result.push_back(tsv);
        }
        return result;
    }
};