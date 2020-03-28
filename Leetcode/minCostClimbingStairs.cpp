class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(cost.size() == 1) {
            return cost[0];
        }
        if(cost.size() == 2) {
            return min(cost[0], cost[1]);
        }
        int result[n];
        result[0] = cost[0];
        result[1] = min(result[0] + cost[1], cost[1]);
        // cout<<result[0]<<" "<<result[1]<<" ";
        int answer;
        for(int j = 2; j < n; j++) {
            result[j] = 0;
            result[j] = min(result[j-1], result[j-2]) + cost[j];
            // cout<<result[j]<<" ";
            answer = result[j];
        }
        return min(result[n-1], result[n-2]);
    }
};