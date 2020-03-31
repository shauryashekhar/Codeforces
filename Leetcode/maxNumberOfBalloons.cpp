class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if(text.size() == 0) {
            return 0;
        }
        if(text.size() < 7) {
            return 0;
        }
        set<char> s;
        s.insert('b');
        s.insert('a');
        s.insert('l');
        s.insert('o');
        s.insert('n');
        map<char, int> m;
        for(char c : text) {
            if(s.count(c) == 1) {
                if(m.count(c)) {
                    m[c] = m[c] + 1;
                } else {
                    m[c] = 1;
                }
            }
        }
        int result = INT_MAX;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            char key = itr->first;
            int value = itr->second;
            // cout<<key<<" "<<value<<endl;
            int tempValue;
            if(key == 'b' || key == 'a' || key == 'n') {
                tempValue = value;
            } else {
                tempValue = value / 2;
            }
            // cout<<tempValue<<endl;
            if(tempValue < result) {
                result = tempValue;
            }
        }
        return result;
    }
};