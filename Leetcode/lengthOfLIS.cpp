class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        if(size == 0) {
            return 0;
        }
        int result[size];
        result[0] = 1;
        // cout<<result[0]<<" ";
        for(int i = 1; i < size; i++) {
            result[i] = 1;
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i]) {
                    result[i] = max(result[i], result[j] + 1);
                }
            }
            // cout<<result[i]<<" ";
        }
        int answer = INT_MIN;
        for(int j = 0; j < size; j++) {
            if(answer < result[j]) {
                answer = result[j];
            }
        }
        return answer;
    }
};