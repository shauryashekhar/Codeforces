class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> zeroes;
        if(matrix.size() == 0) {
            return;
        }
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(matrix[i][j] == 0) {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    zeroes.push_back(temp);
                }
            }
        }
        for(vector<int> zero : zeroes) {
            int row = zero[0];
            int col = zero[1];
            for(int x = 0; x < c; x++) {
                matrix[row][x] = 0;
            }
            for(int y = 0; y < r; y++) {
                matrix[y][col] = 0;
            }
        }
        return;
    }
};