class myComparator{
    public:
    bool operator() (pair<char, int> p1, pair<char, int> p2) {
        if(p2.second > p1.second) {
            return true;
        } else {
            return false;
        }
    }
};


class Solution {
public:
    string frequencySort(string s) {
        string result = "";
        if(s.size() == 0) {
            return result;
        }
        map<char, int> m;
        for(char c : s) {
            if(m.count(c)) {
                m[c] = m[c] + 1;
            } else {
                m[c] = 1;
            }
        }
        priority_queue<pair<char, int>, vector<pair<char, int>>, myComparator> pq;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            char l = itr->first;
            int count = itr->second;
            pq.push(make_pair(l, count));
        }
        while(pq.size() != 0) {
            pair<char, int> tp = pq.top();
            pq.pop();
            char letter = tp.first;
            int count = tp.second;
            for(int i = 0; i < count; i++) {
                result = result + letter;
            }
        }
        return result;
    }
};