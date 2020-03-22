	class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        if(m == 0 && n == 0) {
            return 0;
        }
        if(m == 0) {
            return 0;
        }
        if(n == 0) {
            return 0;
        }
        int arr[1002][1002];
        for(int i = 0; i < m+1; i++) {
            for(int j = 0; j < n+1; j++) {
                if(i == 0 || j == 0) {
                    arr[i][j] = 0;
                } else if (text1[i-1] == text2[j-1]) {
                    arr[i][j] = arr[i-1][j-1] + 1;
                } else {
                    arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                }
                // cout<<arr[i][j]<<" ";
            }
            // cout<<endl;
        }
        return arr[m][n];
    }
};