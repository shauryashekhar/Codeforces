class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        string result = "";
        if(s.size() == 0) {
            return result;
        }
        if(shift.size() == 0) {
            return s;
        }
        for(vector<int> turn : shift) {
            int direction = turn[0];
            int amount = turn[1];
            if(direction % 2 == 0) {
                for(int j = 0; j < amount; j++) {
                    char c = s[0];
                    s.erase(s.begin());
                    s.push_back(c);
                }
            } else {
                for(int j = 0; j < amount; j++) {
                    char c = s[s.size() - 1];
                    s.pop_back();
                    s.insert(s.begin(), c);
                }
            }
        }
        return s;
    }
};