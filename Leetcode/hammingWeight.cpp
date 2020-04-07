class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        vector<int> b;
        while(n != 0) {
            int digit = n % 2;
            b.insert(b.begin(), digit);
            n = n / 2;
        }
        for(int x : b) {
            if(x == 1) {
                result++;
            }
        }
        return result;
    }
};