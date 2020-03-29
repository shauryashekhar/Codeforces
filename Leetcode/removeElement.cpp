class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int result = nums.size();
        if(nums.size() == 0) {
            return result;
        }
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[count] = nums[i];
                count++;
            } else {
                result--;
            }
        }
        return result;
    }
};