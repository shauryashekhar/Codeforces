class Solution {
public:
    int findNumbers(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
        int result = 0;
        for(int x : nums) {
            int temp = x;
            int count = 0;
            while(temp != 0) {
                count++;
                temp = temp / 10;
            }
            if(count % 2 == 0) {
                result++;
            }
        }
        return result;
    }
};