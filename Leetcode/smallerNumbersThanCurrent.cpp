class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;
            if(m.count(nums[i])) {
                result.push_back(m[nums[i]]);
            } else {
                for(int j = 0; j < nums.size(); j++) {
                    if(i != j && nums[j] < nums[i]) {
                        count++;
                    }
                }
                m[nums[i]] = count;
                result.push_back(count);
            }
        }
        return result;
    }
};