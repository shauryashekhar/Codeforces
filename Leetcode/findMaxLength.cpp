class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int result = 0;
        map<int, int> m;
        int sum = 0;
        m[0] = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                sum = sum - 1;
            } else {
                sum = sum + 1;
            }
            if(m.count(sum)) {
                result = max(result, i - m[sum]);
            } else {
                m[sum] = i;
            }
        }
        return result;
    }
};