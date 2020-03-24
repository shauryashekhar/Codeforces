class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int size = A.size();
        int limit = size/2;
        map<int, int> m;
        for(int x : A) {
            if(m.count(x)) {
                m[x] = m[x] + 1;
                if(m[x] == limit) {
                    return x;
                }
            } else {
                m[x] = 1;
            }
        }
        return -1;
    }
};