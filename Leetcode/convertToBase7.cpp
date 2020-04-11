class Solution {
public:
    string convertToBase7(int num) {
        string result = "";
        if(num == 0) {
            result.push_back('0');
            return result;
        }
        int isNeg = 0;
        if(num < 0) {
            isNeg = 1;
            num = num * (-1);
        }
        while(num != 0) {
            int digit = num % 7;
            // cout<<digit<<endl;
            char c = digit + '0';
            result.insert(result.begin(), c);
            num = num / 7;
        }
        if(isNeg) {
            result.insert(result.begin(), '-');
        }
        return result;
    }
};