class Solution {
public:
    int bitwiseComplement(int N) {
        int result = 0;
        if(N == 0) {
            return 1;
        }
        if(N == 1) {
            return 0;
        }
        vector<int> binary;
        while(N != 0) {
            int digit = N % 2;
            binary.insert(binary.begin(), digit);
            N = N / 2;
        }
        int i = 0;
        for(int j = binary.size() - 1; j >= 0; j--) {
            binary[j] = 1 - binary[j];
            int multiplier = pow(2, i);
            i++;
            // cout<<multiplier<< " "<<binary[j]<<endl;
            int tempResult = multiplier * binary[j];
            // cout<<tempResult<<endl;
            result = result+tempResult;
        }
        return result;
    }
};