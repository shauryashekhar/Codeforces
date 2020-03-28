class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return 1;
        }
        if(n == 2) {
            return 1;
        }
        int result[n+1];
        result[0] = 0;
        result[1] = 1;
        result[2] = 1;
        for(int j = 3; j < n + 1; j++) {
            result[j] = 0;
            result[j] = result[j-1] + result[j-2] + result[j-3];
            // cout<<result[j]<<" ";
        }
        return result[n];
    }
};