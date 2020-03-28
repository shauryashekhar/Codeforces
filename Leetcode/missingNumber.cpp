class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
        int x1 = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            x1 = x1 ^ nums[i];
        }
        int x2 = 0;
        for(int i = 1; i <= nums.size(); i++) {
            x2 = x2 ^ i;
        }
        return x1 ^ x2;
    }
};