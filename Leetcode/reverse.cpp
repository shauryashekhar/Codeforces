class Solution {
public:
    int reverse(int x) {
        long long int result = 0;
        while(x != 0) {
            int lastDigit = x % 10;
            if((((result * 10) + lastDigit) > pow(2,31) - 1) || ((((result * 10) + lastDigit) < pow(-2,31)))) {
                return 0;
            }
            result = (result * 10) + lastDigit;
            x = x / 10;
        }
        return result;
    }
};