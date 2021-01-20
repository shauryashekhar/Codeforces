class Solution {
public:
    int result;
    
    void dfs(vector<vector<char>>& grid, int i, int j, int row, int col, int r[], int c[]) {
        grid[i][j] = '0';
        for(int k = 0; k < 4; k++) {
            if(i + r[k] >= 0 && i + r[k] < row && j + c[k] >= 0 && j + c[k] < col) {
                if(grid[i + r[k]][j + c[k]] == '1') {
                    dfs(grid, i + r[k], j + c[k], row, col, r, c);
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        result = 0;
        if (grid.size() == 0) {
            return 0;
        }
        int r[4] = {0,0,-1,1};
        int c[4] = {-1,1,0,0};
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if (grid[i][j] == '1') {
                    result++;
                    dfs(grid, i, j, row, col, r, c);
                }
            }
        }
        return result;
    }
};