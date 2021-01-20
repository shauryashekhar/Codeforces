class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int num = left; num <= right; num++) {
            int temp = num;
            int isOK = 1;
            while(temp != 0) {
                int digit = temp % 10;
                temp = temp / 10;
                if(digit != 0) {
                    if(num % digit == 0) {
                        continue;
                    } else {
                        isOK = 0;
                        break;
                    }
                } else {
                    isOK = 0;
                    break;
                }
            }
            if(isOK) {
                result.push_back(num);
            }
        }
        return result;
    }
};