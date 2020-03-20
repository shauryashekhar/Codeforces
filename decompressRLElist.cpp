class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        if(nums.size() == 0) {
            return result;
        }
        for(int i = 0; i < nums.size(); i = i+2) {
            int frequency = nums[i];
            int value = nums[i+1];
            for(int i = 0; i < frequency; i++) {
                result.push_back(value);
            }
        }
        return result;
    }
};