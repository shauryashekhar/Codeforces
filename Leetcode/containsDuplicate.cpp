class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> m;
        if(nums.size() == 0) {
            return false;
        }
        for(int x : nums) {
            if(m.count(x)) {
                return true;
            } else {
                m[x] = 1;
            }
        }
        return false;
    }
};