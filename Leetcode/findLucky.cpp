class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> m;
        for(int x : arr) {
            if(m.count(x)) {
                m[x] = m[x] + 1;
            } else {
                m[x] = 1;
            }
        }
        int highestReturnValue = INT_MIN;
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            int key = itr->first;
            int no = itr->second;
            if(key == no) {
                if(key > highestReturnValue) {
                    highestReturnValue = key;
                }
            }
        }
        if(highestReturnValue == INT_MIN) {
            return -1;
        } else {
            return highestReturnValue;
        }
    }
};