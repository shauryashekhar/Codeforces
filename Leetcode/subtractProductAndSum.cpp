class Solution {
public:
    int subtractProductAndSum(int n) {
        if (n == 0) {
            return 0;
        }
        int sum = 0;
        int prod = 1;
        while(n != 0) {
            int digit = n % 10;
            n = n/10;
            sum = sum + digit;
            prod = prod * digit;
        }
        return prod - sum;
    }
};