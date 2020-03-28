class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int number = n;
        repeat:
        int sum = 0;
        while(number != 0) {
            int digit = number % 10;
            sum = sum + pow(digit,2);
            number = number / 10;
        }
        if(sum == 1) {
            return true;
        } else {
            if(s.count(sum)) {
                return false;
            } else {
                s.insert(sum);
                number = sum;
                goto repeat;
            }
        }
        return false;
    }
};