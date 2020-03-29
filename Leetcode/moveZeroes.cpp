class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0) {
            return;
        }
        int count = 0;
        int size = nums.size();
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[count] = nums[i];
                count++;
            }
        }
        while(count < size) {
            nums[count] = 0;
            count++;
        }
    }
};