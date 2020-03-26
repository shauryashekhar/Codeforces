class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        if(nums.size() == 0) {
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                count++;
                nums.erase(nums.begin() + i);
            }
        }
        for(int j = 0; j < count; j++) {
            nums.push_back(0);
        }
        return;
    }
};