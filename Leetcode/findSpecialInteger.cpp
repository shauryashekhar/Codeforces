class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        int limit = size/4;
        map<int, int> m;
        for(int x : arr) {
            if(m.count(x)) {
                m[x] = m[x] + 1;
            } else {
                m[x] = 1;
            }
            if(m[x] > limit) {
                return x;
            }
        }
        return 0;
    }
};