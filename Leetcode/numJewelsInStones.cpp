class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        if (jewels.size() == 0) {
            return 0;
        }
        if (stones.size() == 0) {
            return 0;
        }
        int result = 0;
        set<char> s;
        for(char c : jewels) {
            s.insert(c);
        }
        for(char cs : stones) {
            if(s.count(cs)) {
                result++;
            }
        }
        return result;
    }
};