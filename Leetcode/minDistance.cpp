class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        if(m == 0 && n == 0) {
            return 0;
        }
        if(m == 0) {
            return n;
        }
        if(n == 0) {
            return m;
        }
        int arr[m+1][n+1];
        for(int i = 0; i < m+1; i++) {
            for(int j = 0; j < n+1; j++) {
                if(i == 0) {
                    arr[i][j] = j;
                } else if(j == 0) {
                    arr[i][j] = i;
                } else if(word1[i-1] == word2[j-1]) {
                    arr[i][j] = arr[i-1][j-1];
                } else {
                    arr[i][j] = 1 + min(min(arr[i][j-1], arr[i-1][j]), arr[i-1][j-1]);
                }
            }
        }
        return arr[m][n];
    }
};