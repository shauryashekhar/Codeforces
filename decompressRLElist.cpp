class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int size = nums.size();
        vector<int> result;
        if(nums.empty()) {
            return result;
        }
        for(int i = 0; i < size; i = i+2) {
            int num = nums[i];
            int value = nums[i+1];
            for(int j = 0; j < num; j++) {
                result.push_back(value);
            }
        }
        return result;
    }
};