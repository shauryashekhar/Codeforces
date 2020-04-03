class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
        int maxSoFar = nums[0];
        int maxHere = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            maxHere = max(nums[i], maxHere + nums[i]);
            maxSoFar = max(maxSoFar, maxHere);
        }
        return maxSoFar;
    }
};