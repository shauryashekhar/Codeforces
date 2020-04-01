class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size() == 0) {
            return -1;
        }
        map<char, pair<int, int>> m;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(m.count(c)) {
                pair<int, int> tp = m[c];
                int no = tp.first;
                int firstIndex = tp.second;
                no++;
                pair<int, int> np = make_pair(no, firstIndex);
                m[c] = np;
            } else {
                pair<int, int> tp = make_pair(1, i);
                m[c] = tp;
            }
        }
        int result = INT_MAX;
        int found = 0;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            pair<int, int> p = itr->second;
            int no = p.first;
            int index = p.second;
            if(no == 1) {
                found = 1;
                if(index < result) {
                    result = index;
                }
            } else {
                continue;
            }
        }
        if(found == 1) {
            return result;
        } else {
            return -1;
        }
    }
};