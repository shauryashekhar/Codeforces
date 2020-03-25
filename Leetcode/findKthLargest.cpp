class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int result;
        if(nums.size() == 0) {
            return 0;
        }
        priority_queue<int> pq;
        for(int x : nums) {
            pq.push(x);
        }
        for(int i = 0; i < k; i++) {
            result = pq.top();
            pq.pop();
        }
        return result;
    }
};