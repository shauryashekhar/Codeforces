class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        if(grid.size() == 0) {
            return 0;
        }
        int c = grid.size();
        int r = grid[0].size();
        for(int i = 0; i < c; i++) {
            for(int j = 0; j < r; j++) {
                if(grid[i][j] < 0) {
                    count = count + (r-j);
                    break;
                }
            }
        }
        return count;
    }
};