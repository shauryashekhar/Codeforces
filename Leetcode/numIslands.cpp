#define N 100

class Solution {
    int result;
    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
public:
    
    void dfs(vector<vector<char>>& grid, int i, int j, int r, int c) {
        grid[i][j] = '0';
        for(int k = 0; k < 4; k++) {
            if(i + row[k] >= 0 && i + row[k] < r && j + col[k] >= 0 && j + col[k] < c && grid[i+row[k]][j+col[k]] == '1') {
                dfs(grid, i + row[k], j + col[k], r, c);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0) {
            return 0;
        }
        int r = grid.size();
        int c = grid[0].size();
        result = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == '1') {
                    dfs(grid, i, j, r, c);
                    result++;
                }
            }
        }
        return result;
    }
};