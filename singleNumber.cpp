class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(int x : nums) {
            if(m.count(x)) {
                m[x] = m[x] + 1;
            } else {
                m[x] = 1;
            }
        }
        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second == 1) {
                return itr->first;
            }
        }
        return 1;
    }
};