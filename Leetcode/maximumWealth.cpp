class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = 0;
        for(vector<int> account : accounts) {
            int total = 0;
            for(int i : account) {
                total = total + i;
            }
            if (total > result) {
                result = total;
            }
        }
        return result;
    }
};