class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        if(A.size() == 0) {
            return 0;
        }
        int wl = 0;
        int wr = 0;
        int bestL = 0;
        int bestWindow = 0;
        int zeroCount = 0;
        int size = A.size();
        while(wr < size) {
            if(zeroCount <= K) {
                if(A[wr] == 0) {
                    zeroCount++;
                }
                wr++;
            }
            if(zeroCount > K) {
                if(A[wl] == 0) {
                    zeroCount--;
                }
                wl++;
            }
            if((wr - wl > bestWindow) && (zeroCount <= K)) {
                bestWindow = wr - wl;
                bestL = wl;
            }
        }
        return bestWindow;
    }
};