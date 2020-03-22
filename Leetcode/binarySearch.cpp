class Solution {
public:
    
    int binarySearch(vector<int> nums, int l, int r, int target) {
        int mid = (l + r)/2;
        if(nums[mid] == target) {
            return mid;
        } else if (l <= r){
            if(nums[mid] > target) {
                return binarySearch(nums, l, mid - 1, target);
            } else {
                return binarySearch(nums, mid+1, r, target);
            }
        } else {
            return -1;
        }
    }
    
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int result = binarySearch(nums, l, r, target);
        return result;
    }
};