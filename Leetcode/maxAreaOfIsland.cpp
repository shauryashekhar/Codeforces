#define N 60

class Solution {
public:
    
    int visited[N][N];
    int x[4] = {-1, 1, 0, 0};
    int y[4] = {0, 0, 1, -1};
    int result;
    int currentArea;
    
    void dfs(vector<vector<int>> grid, int i, int j, int r, int c, int visited[][N]) {
        if(currentArea > result) {
            result = currentArea;
            // cout<<"Result updated to "<<result<<endl;
        }
        visited[i][j] = 1;
        for(int k = 0; k < 4; k++) {
            if(i + x[k] >= 0 && i + x[k] < r && j + y[k] >= 0 && j + y[k] < c && visited[i+x[k]][j+y[k]] == 0 && grid[i+x[k]][j+y[k]] == 1) {
                // cout<<"Continued at "<<i+x[k]<<" "<<j+y[k]<<endl;
                currentArea++;
                dfs(grid, i+x[k], j+y[k], r, c, visited);
            }
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        result = 0;
        if(grid.size() == 0) {
            return 0;
        }
        int r = grid.size();
        int c = grid[0].size();
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(visited[i][j] == 0 && grid[i][j] == 1) {
                    // cout<<"Started at "<<i<<" "<<j<<endl;
                    currentArea = 1;
                    dfs(grid, i, j, r, c, visited);
                }
            }
        }
        return result;
    }
};