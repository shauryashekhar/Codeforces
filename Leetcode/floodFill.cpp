class Solution {
    
    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
public:
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int r, int c, int newColor, int oldColor) {
        image[sr][sc] = newColor;
        for(int k = 0; k < 4; k++) {
            if(sr + row[k] >= 0 && sr + row[k] < r && sc + col[k] >= 0 && sc + col[k] < c && image[sr+row[k]][sc+col[k]] == oldColor) {
                dfs(image, sr + row[k], sc + col[k], r, c, newColor, oldColor);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> result;
        if(image.size() == 0) {
            return image;
        }
        int r = image.size();
        int c = image[0].size();
        int oldColor = image[sr][sc];
        if(oldColor == newColor) {
            return image;
        }
        dfs(image, sr, sc, r, c, newColor, oldColor);
        return image;
    }
};