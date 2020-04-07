class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        if(digits.size() == 0) {
            result.insert(result.begin(), 1);
            return result;
        }
        int carry = 0;
        for(int j = digits.size() - 1; j >= 0; j--) {
            int number = digits[j];
            int value = number;
            if(j == digits.size() - 1) {
                value++;
            }
            if(carry) {
                value = value + 1;
                carry = 0;
            }
            if(value >= 10) {
                carry = 1;
                value = value % 10;
            }
            result.insert(result.begin(), value);
        }
        if(carry) {
            result.insert(result.begin(), 1);
            carry = 0;
        }
        return result;
    }
};