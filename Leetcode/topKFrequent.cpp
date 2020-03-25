class myComparator {
    public:
    bool operator() (pair<string, int> p1, pair<string, int> p2) {
        if(p2.second > p1.second) {
            return true;
        } else if(p2.second < p1.second){
            return false;
        } else if(p1.second == p1.second) {
            if(p2.first > p1.first) {
                return false;
            } else {
                return true;
            }
        }
        return true;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> result;
        if(words.size() == 0) {
            return result;
        }
        map<string, int> m;
        for(string word : words) {
            if(m.count(word)) {
                m[word] = m[word] + 1;
            } else {
                m[word] = 1;
            }
        }
        priority_queue<pair<string, int>, vector<pair<string, int>>, myComparator> pq;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            string word = itr->first;
            int count = itr->second;
            pq.push(make_pair(word, count));
        }
        for(int i = 0; i < k; i++) {
            pair<string, int> p = pq.top();
            pq.pop();
            result.push_back(p.first);
        }
        return result;
    }
};