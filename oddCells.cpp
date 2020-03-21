class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int arr[60][60] = {0};
        if(indices.size() == 0) {
            return 0;
        }
        for(int i = 0; i < indices.size(); i++) {
            vector<int> pair = indices[i];
            int r = pair[0];
            int c = pair[1];
            for(int j = 0; j < m; j++) {
                arr[r][j] = arr[r][j] + 1;
            }
            for(int k = 0; k < n; k++) {
                arr[k][c] = arr[k][c] + 1;
            }
        }
        int count = 0;
        for(int x = 0; x < n; x++) {
            for(int y= 0; y < m; y++) {
                if(arr[x][y] % 2 != 0) {
                    count++;
                }
            }
        }
        return count;
    }
};