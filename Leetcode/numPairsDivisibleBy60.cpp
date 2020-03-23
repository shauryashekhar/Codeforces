class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int result = 0;
        for(int i = 0; i < time.size(); i++) {
            for(int j = i + 1; j < time.size(); j++) {
                int total = time[i] + time[j];
                if(total % 60 == 0) {
                    result++;
                }
            }
        }
        return result;
    }
};