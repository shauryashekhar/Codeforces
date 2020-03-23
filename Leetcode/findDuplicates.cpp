class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        map<int, int> m;
        for(int x : nums) {
            if(m.count(x)) {
                m[x] = m[x] + 1;
            } else {
                m[x] = 1;
            }
            if(m[x] == 2) {
                result.push_back(x);
            }
        }
        return result;
    }
};