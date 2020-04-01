class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        if(size == 0) {
            return 0;
        }
        int arr[size];
        arr[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == 1) {
                arr[i] = arr[i-1] + 1;
            } else {
                arr[i] = 0;
            }
        }
        int result = INT_MIN;
        for(int j = 0; j < size; j++) {
            if(arr[j] > result) {
                result = arr[j];
            }
        }
        return result;
    }
};