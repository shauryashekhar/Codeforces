class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() == 0) {
            return true;
        }
        set<int> s;
        for(int i = 0; i < word.size(); i++) {
            if(isupper(word[i])) {
                s.insert(i);
            }
        }
        if(s.size() == 0) {
            return true;
        }
        if(s.size() == 1) {
            vector<int> v;
            for(auto itr = s.begin(); itr != s.end(); itr++) {
                v.push_back(*itr);
            }
            if(v[0] == 0) {
                return true;
            } else {
                return false;
            }
        }
        if(s.size() == word.size()) {
            return true;
        } else {
            return false;
        }
    }
};