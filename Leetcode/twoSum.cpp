class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        if(nums.size() == 0) {
            return result;
        }
        if(nums.size() == 1) {
            return result;
        }
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(m.count(target-nums[i])) {
                result.push_back(i);
                result.push_back(m[target-nums[i]]);
                return result;
            } else {
                m[nums[i]] = i;
            }
        }
        return result;
    }
};