class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int i = 0;
        int j = n;
        for(int index = 0; index < nums.size(); index++) {
            if (index % 2 == 0) {
                result.push_back(nums[i]);
                i++;
            } else {
                result.push_back(nums[j]);
                j++;
            }
        }
        return result;
    }
};