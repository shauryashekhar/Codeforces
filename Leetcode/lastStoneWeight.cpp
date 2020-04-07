class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 0) {
            return 0;
        }
        if(stones.size() == 1) {
            return stones[0];
        }
        priority_queue<int> pq;
        for(int x : stones) {
            pq.push(x);
        }
        while(pq.size() > 1) {
            int s1 = pq.top();
            pq.pop();
            int s2 = pq.top();
            pq.pop();
            if(s1 == s2) {
                continue;
            } else {
                if(s1 < s2) {
                    pq.push(s2 - s1);
                } else {
                    pq.push(s1 - s2);
                }
            }
        }
        if(pq.size() == 0) {
            return 0;
        } else {
            int result = pq.top();
            pq.pop();
            return result;
        }
        return 0;
    }
};