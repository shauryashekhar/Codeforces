class Solution {
public:
    void sortColors(vector<int>& nums) {
        int pos = 0;
        int c1 = 0;
        int c2 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                c1++;
            } else if(nums[i] == 2) {
                c2++;
            } else if(nums[i] == 0) {
                nums[pos] = 0;
                pos++;
            }
        }
        while(c1 != 0) {
            nums[pos] = 1;
            pos++;
            c1--;
        }
        while(c2 != 0) {
            nums[pos] = 2;
            pos++;
            c2--;
        }
    }
};