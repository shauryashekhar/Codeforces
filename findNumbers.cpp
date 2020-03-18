class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int x : nums) {
            int digits = 0;
            while(x != 0) {
                x = x/10;
                digits++;
            }
            if(digits % 2 == 0) {
                result++;
            }
        }
        return result;
    }
};