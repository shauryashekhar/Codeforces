class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        if(nums.size() == 0) {
            return result;
        }
        int left = 0;
        int right = k - 1;
        int size = nums.size();
            // Logic to check first window
            
            
        while(right < size) {
            int currentMax = INT_MIN;
            for(int i = left; i <= right; i++) {
                if(nums[i] > currentMax) {
                    currentMax = nums[i];
                }
            }
            result.push_back(currentMax);
            left++;
            right++;
        }
        return result;
    }
};