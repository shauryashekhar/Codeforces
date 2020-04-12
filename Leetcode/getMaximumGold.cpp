#define N 30

class Solution {
    int result;
    int current;
    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
public:
    
    void dfs(vector<vector<int>>& grid, int i, int j, int r, int c, int visited[][N]) {
        current = current + grid[i][j];
        visited[i][j] = 1;
        if(current > result) {
            result = current;
        }
        // cout<<i<<" "<<j<<" "<<current<<" "<<result<<endl;
        for(int k = 0; k < 4; k++) {
            if(i+row[k] >= 0 && i+row[k] < r && j+col[k] >= 0 && j+col[k] < c && grid[i+row[k]][j+col[k]] > 0 && visited[i+row[k]][j+col[k]] == 0) {
                dfs(grid, i + row[k], j + col[k], r, c, visited);
            }
        }
        // cout<<"Returning for "<<i<<" "<<j<<endl;
        visited[i][j] = 0;
        current = current - grid[i][j];
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        if(grid.size() == 0) {
            return 0;
        }
        result = 0;
        current = 0;
        int r = grid.size();
        int c = grid[0].size();
        int visited[N][N];
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                current = 0;
                if(grid[i][j] > 0 && visited[i][j] == 0) {
                    dfs(grid, i, j, r, c, visited);
                }
            }
        }
        return result;
    }
};