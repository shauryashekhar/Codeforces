class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        if(nums.size() == 0) {
            return result;
        }
        for(int x : nums) {
            int count = 0;
            while(x != 0) {
                x = x/10;
                count++;
            }
            if(count % 2 == 0) {
                result++;
            }
        }
        return result;
    }
};