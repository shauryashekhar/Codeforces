class Solution {
public:
    int binaryGap(int N) {
        if(N == 0) {
            return 0;
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
        vector<int> pos;
        for(int i = 0; i < binary.size(); i++) {
            if(binary[i] == 1) {
                pos.push_back(i);
            }
        }
        int result = 0;
        for(int j = 0; j < pos.size() - 1; j++) {
            int diff = pos[j+1] - pos[j];
            if(diff > result) {
                result = diff;
            }
        }
        return result;
    }
};