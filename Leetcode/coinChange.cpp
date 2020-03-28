class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(coins.size() == 0 && amount == 0) {
            return 0;
        }
        if(coins.size() == 0) {
            return -1;
        }
        if(amount == 0) {
            return 0;
        }
        int result[amount+1];
        result[0] = 0;
        for(int i = 1; i < amount + 1; i++) {
            result[i] = INT_MAX;
            // cout<<"For amount "<<i<<endl;
            for(int j = 0; j < coins.size(); j++) {
                if(i-coins[j] >= 0 && result[i-coins[j]] != INT_MAX) {
                    // cout<<"Comparison value "<<result[i]<<" and "<<result[i-coins[j]] + 1<<endl;
                    result[i] = min(result[i], result[i-coins[j]] + 1); 
                    // cout<<"For values "<<i-coins[j]<<" value is now "<<result[i]<<endl;
                }
            }
        }
        if(result[amount] == INT_MAX) {
            return -1;
        } else {
            return result[amount];
        }
    }
};