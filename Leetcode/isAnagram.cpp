class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == 0 && t.size() == 0) {
            return true;
        }
        if(s.size() == 0 || t.size() == 0) {
            return false;
        }
        map<char, int> m;
        for(char c : s) {
            if(m.count(c)) {
                m[c] = m[c] + 1;
            } else {
                m[c] = 1;
            }
        }
        for(char c : t) {
            if(m.count(c)) {
                if(m[c] > 0) {
                    m[c] = m[c] - 1;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second != 0) {
                return false;
            }
        }
        return true;
    }
};