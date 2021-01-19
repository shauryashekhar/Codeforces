class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        if(nums.size() == 0) {
            return result;
        }
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;
            for(int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    if(nums[i] > nums[j]) {
                        count++;
                    }
                }
            }
            result.push_back(count);
        }
        return result;
    }
};