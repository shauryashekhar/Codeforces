class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0) {
            return -1;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                return i;
            }
        }
        int j;
        for(j = 0; j < nums.size(); j++) {
            if(nums[j] < target) {
                continue;
            } else {
                return j;
            }
        }
        return j;
    }
};