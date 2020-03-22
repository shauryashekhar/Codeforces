class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++) {
            int checkAgainst = i;
            int number = i;
            int add = 1;
            while(number != 0) {
                int lastDigit = number % 10;
                if(lastDigit == 0) {
                    add = 0;
                } else {
                    int remainder = checkAgainst % lastDigit;
                    if(remainder != 0){
                        // cout<<"For checkAgainst "<<checkAgainst<<" set"<<endl;
                        add = 0;
                    }
                }
                number = number / 10;
            }
            if(add == 1) {
                result.push_back(checkAgainst);
            }
        }
        
        return result;
    }
};