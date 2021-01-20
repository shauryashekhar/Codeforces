class Solution {
public:
    
    int result;
    int thisArea;
    
    void dfs(vector<vector<int>>& grid, int i, int j, int r, int c, int row[], int col[]) {
        if(thisArea > result) {
            result = thisArea;
        }
        grid[i][j] = 0;
        for(int k = 0; k < 4; k++) {
            if (i + row[k] >= 0 && i + row[k] < r && j + col[k] >= 0 && j + col[k] < c) {
                if (grid[i+row[k]][j+col[k]] == 1) {
                    thisArea++;
                    dfs(grid, i + row[k], j + col[k], r, c, row, col);
                }
            }
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size() == 0) {
            return 0;
        }
        result = 0;
        int r = grid.size();
        int c = grid[0].size();
        int row[4] = {0,0,-1,1};
        int col[4] = {-1,1,0,0};
        thisArea = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == 1) {
                    thisArea++;
                    dfs(grid, i, j, r, c, row, col);
                    thisArea = 0;
                }
            }
        }
        return result;
    }
};