class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0) {
            return 0;
        }
        int r = grid.size();
        int c = grid[0].size();
        int arr[1000][1000];
        arr[0][0] = grid[0][0];
        for(int i = 1; i < r; i++) {
            arr[i][0] = arr[i-1][0] + grid[i][0];
        }
        for(int j = 1; j < c; j++) {
            arr[0][j] = arr[0][j-1] + grid[0][j];
        }
        for(int k = 1; k < r; k++) {
            for(int l = 1; l < c; l++) {
                arr[k][l] = grid[k][l] + min(arr[k-1][l], arr[k][l-1]);
            }
        }
        return arr[r-1][c-1];
    }
};