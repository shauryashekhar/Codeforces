class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0 && n == 0) {
            return;
        }
        if(n == 0) {
            return;
        }
        if(m == 0) {
            nums1 = nums2;
            return;
        }
        vector<int> result;
        int i = 0;
        int j = 0;
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                result.push_back(nums1[i]);
                i++;
            } else {
                result.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m) {
            result.push_back(nums1[i]);
            i++;
        }
        while(j < n) {
            result.push_back(nums2[j]);
            j++;
        }
        nums1 = result;
    }
};