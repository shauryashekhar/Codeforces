class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int result;
        if(nums.size() == 0) {
            return 0;
        }
        priority_queue<int> pq;
        set<int> s;
        for(int x : nums) {
            if(s.count(x) == 0) {
                pq.push(x);
                s.insert(x);
            }
        }
        if(pq.size() < 3) {
            result = pq.top();
            return result;
        } else {
            for(int i = 0; i < 3; i++) {
                result = pq.top();
                pq.pop();
            }
            return result;
        }
    }
};