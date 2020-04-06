class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) {
            return 0;
        }
        int maxValue = 0;
        int minValue = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minValue) {
                minValue = prices[i];
            } else {
                maxValue = max(maxValue, prices[i] - minValue);
            }
        }
        return maxValue;
    }
};