class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> s;
        for(int i = 0; i < J.size(); i++) {
            s.insert(J[i]);
        }
        int count = 0;
        for(int j = 0; j < S.size(); j++) {
            if(s.count(S[j])) {
                count++;
            }
        }
        return count;
    }
};