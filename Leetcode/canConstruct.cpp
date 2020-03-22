class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        if(magazine.size() == 0 && ransomNote.size() == 0) {
            return true;
        }
        if(magazine.size() == 0) {
            return false;
        }
        if(ransomNote.size() == 0) {
            return true;
        }
        for(int i = 0; i < magazine.size(); i++) {
            if(m.count(magazine[i])) {
                m[magazine[i]] = m[magazine[i]] + 1;
            } else {
                m[magazine[i]] = 1;
            }
        }
        for(int j = 0; j < ransomNote.size(); j++) {
            if(m.count(ransomNote[j])) {
                if(m[ransomNote[j]] > 0) {
                    m[ransomNote[j]] = m[ransomNote[j]] - 1;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};