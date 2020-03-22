class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        if(nums.size() == 0 || index.size() == 0) {
            return result;
        }
        for(int i = 0; i < index.size(); i++) {
            int number = nums[i];
            int pos = index[i];
            result.insert(result.begin() + pos, number);
        }
        return result;
    }
};