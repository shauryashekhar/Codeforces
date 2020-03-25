class Solution {
public:
    int uniquePaths(int m, int n) {
        int arr[n][m];
        if(m == 0 && n == 0) {
            return 0;
        }
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 || j == 0) {
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = arr[i-1][j] + arr[i][j-1];
                }
            }
        }
        return arr[n-1][m-1];
    }
};